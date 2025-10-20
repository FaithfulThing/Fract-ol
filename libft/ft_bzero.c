/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:33:57 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/23 14:39:06 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t				i;
	unsigned char		*dest;

	i = 0;
	dest = (unsigned char *)s;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
}
