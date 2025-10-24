/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:26:13 by cacesar-          #+#    #+#             */
/*   Updated: 2025/10/24 11:47:25 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACT_H

# include"libft/libft.h"
# define FRACT_H

typedef struct s_libx
{
	long double	cb;
	long double	cs;
	void		*lmx;
	void		*win;
	void		*img;
	char		*addr;
	int			bit_per_pixel;
	int			line_lenght;
	int			endian;
}	t_win;

int		main(int argc, char**argv);
int		key_hooked(int k_code, t_win*lmx);
int		close_window(t_win*lmx);
void	julia(t_win *lmx);

#endif