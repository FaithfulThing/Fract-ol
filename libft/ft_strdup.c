/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:50:24 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/24 10:38:47 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(char *s)
{
	char	*cpy;
	int		len;
	int		count;

	len = ft_strlen(s);
	count = len + 1;
	cpy = (char *)malloc(1 + len);
	if (!cpy)
		return ((void *)0);
	while (count-- >= 0 && count != -1)
		cpy[count] = s[count];
	return (cpy);
}
