/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 00:10:21 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:20:31 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	element_counter;
	t_list	*current_node;

	element_counter = 0;
	current_node = lst;
	while (current_node != NULL)
	{
		element_counter++;
		current_node = current_node->next;
	}
	return ((int)element_counter);
}
