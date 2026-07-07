/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 21:08:40 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:19:12 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocated_memory;
	size_t	total_bytes;

	total_bytes = count * size;
	if (count != 0 && (total_bytes / count) != size)
		return (NULL);
	allocated_memory = malloc(total_bytes);
	if (allocated_memory == NULL)
		return (NULL);
	ft_bzero(allocated_memory, total_bytes);
	return (allocated_memory);
}
