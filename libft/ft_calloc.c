/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:57:07 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/27 11:07:27 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb == 0 || size == 0)
		return (ft_calloc(1, 1));
	if (nmemb && size && nmemb != nmemb * size / size)
		return ((void *)0);
	result = malloc(nmemb * size);
	if (!result)
		return ((void *)0);
	ft_bzero(result, nmemb * size);
	return (result);
}
