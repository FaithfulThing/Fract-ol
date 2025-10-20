/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:39:04 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/19 15:02:39 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void*src, size_t n)
{
	size_t				i;
	unsigned char		*dest2;
	const unsigned char	*src2;

	i = 0;
	dest2 = (unsigned char *)dest;
	src2 = (const unsigned char *)src;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}
