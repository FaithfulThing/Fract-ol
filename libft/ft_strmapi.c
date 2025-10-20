/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 09:46:07 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/27 09:57:07 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		count;

	if (!s)
		return ((void *)0);
	str = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!str)
		return ((void *)0);
	count = -1;
	while (s[++count])
	{
		str[count] = f(count, s[count]);
	}
	return (str);
}
