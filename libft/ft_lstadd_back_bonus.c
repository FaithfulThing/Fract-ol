/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 12:17:12 by cacesar-          #+#    #+#             */
/*   Updated: 2025/09/27 14:57:44 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*index;

	if (!lst || !new)
		return ;
	if (*lst == (void *)0)
	{
		*lst = new;
		return ;
	}
	new->prev = ft_lstlast(*lst);
	index = new->prev;
	index->next = new;
}
