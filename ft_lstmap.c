/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <jraty@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:17:33 by jraty             #+#    #+#             */
/*   Updated: 2020/07/13 16:09:26 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*head;
	t_list		*temp;

	head = f(ft_lstnew(lst->content, lst->content_size));
	temp = head;
	while ((lst = lst->next))
	{
		temp->next = f(ft_lstnew(lst->content, lst->content_size));
		temp = temp->next;
	}
	return (head);
}
