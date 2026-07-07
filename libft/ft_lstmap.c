/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 00:18:39 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:20:25 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cloned_list_head;
	t_list	*new_node_allocation;
	void	*transformed_content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	cloned_list_head = NULL;
	while (lst != NULL)
	{
		transformed_content = f(lst->content);
		new_node_allocation = ft_lstnew(transformed_content);
		if (new_node_allocation == NULL)
		{
			del(transformed_content);
			ft_lstclear(&cloned_list_head, del);
			return (NULL);
		}
		ft_lstadd_back(&cloned_list_head, new_node_allocation);
		lst = lst->next;
	}
	return (cloned_list_head);
}
