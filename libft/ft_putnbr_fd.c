/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 10:22:37 by cacesar-          #+#    #+#             */
/*   Updated: 2025/08/02 16:01:54 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr_fd(long int n, int fd)
{
	char		result;
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb / 10 > 0)
		ft_putnbr_fd(nb / 10, fd);
	result = '0' + (nb % 10);
	write(fd, &result, 1);
}
