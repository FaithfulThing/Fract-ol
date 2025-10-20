/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:04:24 by cacesar-          #+#    #+#             */
/*   Updated: 2025/09/25 16:04:49 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

long long int	ft_atoi(const char *nptr)
{
	long long int	result;
	long long int	flag;
	long long int	count;

	result = 0;
	flag = 1;
	count = 0;
	while ((nptr[count] >= 9 && nptr[count] <= 13) || nptr[count] == 32)
		count++;
	if (nptr[count] == '-' || nptr[count] == '+')
		count++;
	if (nptr[count - 1] == '-')
		flag = -1;
	while (nptr[count] && ft_isdigit(nptr[count]))
		result = result * 10 + (nptr[count++] - 48);
	return (result * flag);
}
