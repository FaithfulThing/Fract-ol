/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:02:21 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/31 10:32:49 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest2;
	const unsigned char	*src2;

	dest2 = (unsigned char *)dest;
	src2 = (const unsigned char *)src;
	if (!dest && !src)
		return (0);
	if (dest <= src)
	{
		while (n--)
			*dest2++ = *src2++;
	}
	else
	{
		dest2 += n - 1;
		src2 += n - 1;
		while (n--)
			*dest2-- = *src2--;
	}
	return (dest);
}
