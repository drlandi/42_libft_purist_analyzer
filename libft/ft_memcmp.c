/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 17:46:27 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:20:38 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*memory1;
	const unsigned char	*memory2;
	size_t				compare_index;

	memory1 = (const unsigned char *)s1;
	memory2 = (const unsigned char *)s2;
	compare_index = 0;
	while (compare_index < n)
	{
		if (memory1[compare_index] != memory2[compare_index])
		{
			return (memory1[compare_index] - memory2[compare_index]);
		}
		compare_index++;
	}
	return (0);
}
