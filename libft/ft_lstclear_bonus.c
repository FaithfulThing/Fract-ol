/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 17:14:30 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/28 17:45:40 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*index;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		index = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = index;
	}
	*lst = (void *)0;
}
