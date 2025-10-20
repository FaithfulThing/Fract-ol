/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhexlower_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 16:54:06 by cacesar-          #+#    #+#             */
/*   Updated: 2025/08/02 19:03:23 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbrhexlower_fd(long long int n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n / 16 > 0)
		ft_putnbrhexlower_fd(n / 16, fd);
	write(fd, &"0123456789abcdef"[n % 16], 1);
}
