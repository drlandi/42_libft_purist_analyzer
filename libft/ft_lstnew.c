/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 00:22:58 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:20:28 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node_allocation;

	new_node_allocation = (t_list *)malloc(sizeof(t_list));
	if (new_node_allocation == NULL)
		return (NULL);
	new_node_allocation->content = content;
	new_node_allocation->next = NULL;
	return (new_node_allocation);
}
