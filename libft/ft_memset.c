/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:52:18 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/19 13:32:49 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*dest;

	i = 0;
	dest = (unsigned char *)s;
	while (i < n)
	{
		dest[i] = (unsigned char )c;
		i++;
	}
	return (s);
}
