/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 17:58:51 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/28 19:16:33 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*neo_new;

	if (!lst || !f || !del)
		return ((void *)0);
	new = ft_lstnew(f(lst->content));
	if (!new->content)
		return ((void *)0);
	neo_new = new;
	while (lst->next)
	{
		lst = lst->next;
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&neo_new, del);
			return ((void *)0);
		}
		ft_lstadd_back(&neo_new, new);
	}
	return (neo_new);
}
