/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 17:01:21 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:21:22 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	dst_index;
	size_t	src_index;

	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst[dst_len] != '\0' && dst_len < dstsize)
		dst_len++;
	if (dst_len == dstsize)
		return (dstsize + src_len);
	dst_index = dst_len;
	src_index = 0;
	while (src[src_index] != '\0' && (dst_index + 1) < dstsize)
	{
		dst[dst_index] = src[src_index];
		dst_index++;
		src_index++;
	}
	dst[dst_index] = '\0';
	return (dst_len + src_len);
}
