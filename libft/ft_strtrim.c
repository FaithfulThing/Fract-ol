/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:16:23 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/25 10:52:19 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		count1;

	if (!s1)
		return ((void *)0);
	if (*s1 == '\0')
		return (ft_calloc(1, 1));
	count1 = 0;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	count1 = ft_strlen(s1);
	while (count1 && ft_strchr(set, s1[count1 - 1]))
		count1--;
	result = ft_substr(s1, 0, (size_t)count1);
	return (result);
}
