/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:43:35 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/31 10:32:29 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		count;

	if (!s)
		return ((void *)0);
	if (start > ft_strlen(s))
		return (ft_calloc(1, 1));
	count = 0;
	if (start + len >= ft_strlen(s))
		substr = (char *)malloc((ft_strlen(&s[start]) + 1) * sizeof(s[0]));
	else
		substr = (char *)malloc((len + 1) * sizeof(s[0]));
	if (!substr)
		return ((void *)0);
	if (start > ft_strlen(s))
		return (ft_calloc(1, 1));
	while (count < len && s[start + count])
	{
		substr[count] = s[start + count];
		count++;
	}
	substr[count] = '\0';
	return (substr);
}
