/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:17:52 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/23 10:38:43 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count1;
	size_t	count2;
	size_t	count3;

	if (size > 0)
	{
		count2 = -1;
		if (ft_strlen(dst) >= size)
			return (ft_strlen(src) + (size));
		count1 = ft_strlen(dst);
		count3 = count1;
		while (src[++count2] && count2 != (size - count1 - 1))
			dst[count1 + count2] = src[count2];
		dst[count1 + count2] = '\0';
	}
	if (!dst || size == 0)
		return (ft_strlen(src));
	return (count3 + ft_strlen(src));
}
