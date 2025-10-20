/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 10:50:11 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/28 11:14:23 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	new->next = lst[0];
	lst[0] = new;
}
