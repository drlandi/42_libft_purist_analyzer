/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 00:17:25 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:20:20 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current_node;

	if (lst == NULL || f == NULL)
		return ;
	current_node = lst;
	while (current_node != NULL)
	{
		f(current_node->content);
		current_node = current_node->next;
	}
}
