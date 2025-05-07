/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryllis <amaryllismain09@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:00:18 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/01/29 16:53:20 by amaryllis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;
	t_list	*tail;

	if (!lst)
		return (0);
	tail = lst;
	head = ft_lstnew(f(lst->content));
	if (!head)
		return (0);
	tail = tail->next;
	while (tail)
	{
		new = ft_lstnew(f(tail->content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		ft_lstadd_back(&head, new);
		tail = tail->next;
	}
	return (head);
}
