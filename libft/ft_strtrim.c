/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 21:18:49 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 20:35:23 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char character, char const *set)
{
	size_t	set_index;

	set_index = 0;
	while (set[set_index] != '\0')
	{
		if (set[set_index] == character)
			return (1);
		set_index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_index;
	size_t	end_index;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start_index = 0;
	while (s1[start_index] != '\0' && is_in_set(s1[start_index], set))
	{
		start_index++;
	}
	end_index = ft_strlen(s1);
	while (end_index > start_index && is_in_set(s1[end_index - 1], set))
	{
		end_index--;
	}
	return (ft_substr(s1, start_index, (end_index - start_index)));
}
