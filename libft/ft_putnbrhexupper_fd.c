/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhexupper_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:08:54 by cacesar-          #+#    #+#             */
/*   Updated: 2025/08/02 18:59:05 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbrhexupper_fd(long long int n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n / 16 > 0)
		ft_putnbrhexupper_fd(n / 16, fd);
	write(fd, &"0123456789ABCDEF"[n % 16], 1);
}
