/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 21:11:11 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:21:13 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cloned_string;
	size_t	string_length;

	string_length = ft_strlen(s1);
	cloned_string = (char *)ft_calloc((string_length + 1), sizeof(char));
	if (cloned_string == NULL)
		return (NULL);
	ft_memcpy(cloned_string, s1, string_length);
	return (cloned_string);
}
