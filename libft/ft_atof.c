/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:53:05 by cacesar-          #+#    #+#             */
/*   Updated: 2025/10/23 19:11:06 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

long double	ft_atof(char*nptr)
{
	long double	result;
	long double	rest;
	long double	flag;
	int			count;

	result = 0.0;
	rest = 0.0;
	flag = 1.;
	count = 0;
	while ((nptr[count] >= 9 && nptr[count] <= 13) || nptr[count] == 32)
		count++;
	if (nptr[count] == '-' || nptr[count] == '+')
		count++;
	if (nptr[count - 1] == '-')
		flag = -1;
	while (nptr[count] && ft_isdigit(nptr[count]))
		result = result * 10 + (nptr[count++] - 48);
	if (nptr[count++] == '.')
		while (nptr[count] && ft_isdigit(nptr[count]))
			rest = rest / 10 + (nptr[count++] - 48);
	result += rest;
	if (flag == -1)
		result = -result;
	return (result);
}
