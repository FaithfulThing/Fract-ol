/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract-ol.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:27:48 by cacesar-          #+#    #+#             */
/*   Updated: 2025/10/24 14:01:56 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fract.h"

void	my_mlx_pixel_put(t_win *lmx, int x, int y, int color)
{
	char	*dst;
	int		red;

	if (color < 11)
		color = 0;
	else
	{
		red = color * 5.0;
		color = (70 << 16) | (red << 8) | 70;
	}
	if (x >= 0 && x < 1000 && y >= 0 && y < 1000)
	{
		dst = lmx->addr + (y * lmx->line_lenght + x * (lmx->bit_per_pixel / 8));
		*(unsigned int *)dst = color;
	}
}

int	julia_check(long double x, long double y, int max_iterations, t_win	*lmx)
{
	long double	z_re;
	long double	z_re_temp;
	long double	z_im;
	int			count;

	z_re = x;
	z_im = y;
	count = -1;
	while (++count < max_iterations)
	{
		if (z_re * z_re + z_im * z_im > 4.0)
			return (count);
		z_re_temp = z_re;
		z_re = ((z_re * z_re) - (z_im * z_im))
			+ (lmx->cb / 1000.0L * 4.0L - 2.0L);
		z_im = (2.0 * z_re_temp * z_im) + (lmx->cs / 1000 * 4 - 2);
	}
	return (max_iterations);
}

void	julia(t_win	*lmx)
{
	long double	x;
	long double	y;
	int			color;

	x = -1.0;
	while (++x < 1000)
	{
		y = -1.0;
		while (++y < 1000)
		{
			color = julia_check(x, y, 100, lmx);
			if (color != 100)
				my_mlx_pixel_put(lmx, x, y, color);
		}
	}
	mlx_put_image_to_window(lmx->lmx, lmx->win, lmx->img, 0, 0);
	mlx_key_hook(lmx->win, key_hooked, lmx);
	mlx_hook(lmx->win, 17, 0, close_window, lmx);
	mlx_loop(lmx->lmx);
}

int	mandelbrot_check(long double x, long double y, int max_iterations)
{
	long double	z_re;
	long double	z_re_temp;
	long double	z_im;
	int			count;

	z_re = x;
	z_im = y;
	count = -1;
	while (++count < max_iterations)
	{
		if (z_re * z_re - z_im * z_im > 4.0)
			return (count);
		z_re_temp = z_re;
		z_re = (z_re * z_re) - (z_im * z_im) + x / 1000 * 4 - 2;
		z_im = 2.0 * z_re_temp * z_im + y / 1000 * 4 - 2;
	}
	return (max_iterations);
}

int	close_window(t_win*lmx)
{
	if (lmx->img)
		mlx_destroy_image(lmx->lmx, lmx->img);
	mlx_destroy_window(lmx->lmx, lmx->win);
	mlx_destroy_display(lmx->lmx);
	free(lmx->lmx);
	exit (0);
}

int	key_hooked(int k_code, t_win*lmx)
{
	if (k_code == 65307)
		close_window(lmx);
	return (1);
}

void	mandelbrot(t_win	*lmx)
{
	long double	x;
	long double	y;
	int			color;

	x = -1.0;
	while (++x < 1000)
	{
		y = -1.0;
		while (++y < 1000)
		{
			color = mandelbrot_check(x, y, 50);
			if (color != 50)
				my_mlx_pixel_put(lmx, x, y, color);
		}
	}
	mlx_put_image_to_window(lmx->lmx, lmx->win, lmx->img, 0, 0);
	mlx_key_hook(lmx->win, key_hooked, lmx);
	mlx_hook(lmx->win, 17, 0, close_window, lmx);
	mlx_loop(lmx->lmx);
}

int	main(int argc, char**argv)
{
	t_win	*lmx;

	lmx = malloc(sizeof(t_win));
	argc = 0;
	(void)argv;
	lmx->lmx = mlx_init();
	lmx->win = mlx_new_window(lmx->lmx, 1000, 1000, "teste");
	lmx->img = mlx_new_image(lmx->lmx, 1000, 1000);
	lmx->addr = mlx_get_data_addr(lmx->img, &lmx->bit_per_pixel,
			&lmx->line_lenght, &lmx->endian);
	if (1)
	{
		lmx->cs = -0.8;
		lmx->cb = 0.156;
		julia(lmx);
	}
	else if (0)
		mandelbrot(lmx);
	return (0);
}
