/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 17:43:02 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:20:34 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*memory_pointer;
	size_t				byte_index;
	unsigned char		target_byte;

	memory_pointer = (const unsigned char *)s;
	byte_index = 0;
	target_byte = (unsigned char)c;
	while (byte_index < n)
	{
		if (memory_pointer[byte_index] == target_byte)
			return ((void *)&memory_pointer[byte_index]);
		byte_index++;
	}
	return (NULL);
}
