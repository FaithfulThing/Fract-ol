/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:44:11 by cacesar-          #+#    #+#             */
/*   Updated: 2025/10/10 12:48:31 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(int *content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	head->index = 0;
	head->target = 0;
	head->cost = 0;
	head->content = content;
	head->next = (void *)0;
	head->prev = (void *)0;
	return (head);
}
