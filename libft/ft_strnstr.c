/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:48:13 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/26 15:47:41 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		count1;
	int		count2;

	count1 = -1;
	if (little[0] == '\0')
		return ((char *)big);
	if (big == (void *)0 && len == 0)
		return ((void *)0);
	while (big[++count1] && (size_t)count1 < len)
	{
		count2 = 0;
		if (big[count1] == little[count2])
		{
			while (little[count2] && (big[count1 + count2] == little[count2])
				&& (size_t)(count1 + count2) < len)
				count2++;
			if (little[count2] == '\0' && count2 > 0)
				return ((char *)&big[count1]);
		}
	}
	return ((void *)0);
}
