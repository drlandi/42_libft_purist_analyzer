/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 21:39:26 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:21:31 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapped_string;
	size_t	string_length;
	size_t	string_index;

	if (s == NULL || f == NULL)
		return (NULL);
	string_length = ft_strlen(s);
	mapped_string = (char *)ft_calloc((string_length + 1), sizeof(char));
	if (mapped_string == NULL)
		return (NULL);
	string_index = 0;
	while (s[string_index] != '\0')
	{
		mapped_string[string_index] = f((unsigned int)string_index,
				s[string_index]);
		string_index++;
	}
	return (mapped_string);
}
