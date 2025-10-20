/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:07:03 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/31 10:32:00 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		count;

	count = 0;
	if (!s1 || !s2)
		return ((void *)0);
	result = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1 * sizeof(s1[0]));
	if (!result)
		return ((void *)0);
	while (*s1)
		result[count++] = (char)*s1++;
	while (*s2)
		result[count++] = (char)*s2++;
	result[count] = '\0';
	return (result);
}
