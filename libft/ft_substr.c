/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 21:16:26 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:21:50 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring_allocation;
	size_t	source_length;
	size_t	actual_substring_length;

	if (s == NULL)
		return (NULL);
	source_length = ft_strlen(s);
	if (start >= source_length)
		return (ft_strdup(""));
	actual_substring_length = source_length - start;
	if (actual_substring_length > len)
		actual_substring_length = len;
	substring_allocation = (char *)ft_calloc((actual_substring_length + 1),
			sizeof(char));
	if (substring_allocation == NULL)
		return (NULL);
	ft_memcpy(substring_allocation, &s[start], actual_substring_length);
	return (substring_allocation);
}
