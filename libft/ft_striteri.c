/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 09:57:47 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/27 10:04:21 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,	char*))
{
	int		count;

	count = -1;
	while (s[++count])
		f(count, s + count);
}
