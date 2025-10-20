/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:07:05 by cacesar-          #+#    #+#             */
/*   Updated: 2025/10/09 16:27:37 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	partition(int*arr, int first, int last)
{
	int	pivot;
	int	count1;
	int	count2;

	pivot = arr[first];
	count1 = first;
	count2 = last;
	while (count1 < count2)
	{
		while (arr[count1] <= pivot && count1 <= last - 1)
			count1++;
		while (arr[count2] > pivot && count2 >= first + 1)
			count2--;
		if (count1 < count2)
			ft_swap(&arr[count1], &arr[count2]);
	}
	ft_swap(&arr[first], &arr[count2]);
	return (count2);
}

void	ft_qsort(int *arr, int first, int last)
{
	int	pi;

	if (first < last)
	{
		pi = partition(arr, first, last);
		ft_qsort(arr, first, pi - 1);
		ft_qsort(arr, pi + 1, last);
	}
}
