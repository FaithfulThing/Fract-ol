/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_putnbrhex_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:01:53 by cacesar-          #+#    #+#             */
/*   Updated: 2025/08/02 19:02:05 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_ptr_putnbrhex_fd(unsigned long long int n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n / 16 > 0)
		ft_ptr_putnbrhex_fd(n / 16, fd);
	write(fd, &"0123456789abcdef"[n % 16], 1);
}
