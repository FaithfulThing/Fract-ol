/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:21:33 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/19 16:43:51 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	count;

	count = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (size-- > 1 && src[count] != '\0')
	{
		dst[count] = src[count];
		count++;
	}
	dst[count] = '\0';
	return (ft_strlen(src));
}
