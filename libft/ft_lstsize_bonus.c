/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:26:36 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/28 15:35:25 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;

	count = 0;
	while (lst != (void *)0)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
