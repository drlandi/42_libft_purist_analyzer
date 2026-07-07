/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 17:11:42 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 20:35:50 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	string_index;
	char	target_char;
	char	*last_occurrence;

	string_index = 0;
	target_char = (char)c;
	last_occurrence = NULL;
	while (s[string_index] != '\0')
	{
		if (s[string_index] == target_char)
			last_occurrence = (char *)&s[string_index];
		string_index++;
	}
	if (s[string_index] == target_char)
		return ((char *)&s[string_index]);
	return (last_occurrence);
}
