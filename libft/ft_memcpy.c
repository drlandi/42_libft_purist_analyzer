/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 16:24:56 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:20:40 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d_dst;
	const unsigned char	*s_src;

	if (!dst && !src)
		return (NULL);
	d_dst = (unsigned char *)dst;
	s_src = (const unsigned char *)src;
	while (n > 0)
	{
		*d_dst = *s_src;
		d_dst++;
		s_src++;
		n--;
	}
	return (dst);
}
