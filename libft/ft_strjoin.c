/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 21:17:52 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:21:19 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_string_allocation;
	size_t	s1_length;
	size_t	s2_length;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	joined_string_allocation = (char *)ft_calloc((s1_length + s2_length + 1),
			sizeof(char));
	if (joined_string_allocation == NULL)
		return (NULL);
	ft_memcpy(joined_string_allocation, s1, s1_length);
	ft_memcpy(&joined_string_allocation[s1_length], s2, s2_length);
	return (joined_string_allocation);
}
