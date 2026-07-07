/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 17:04:59 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:21:10 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;
	char	target;

	index = 0;
	target = (char)c;
	while (s[index] != '\0')
	{
		if (s[index] == target)
			return ((char *)&s[index]);
		index++;
	}
	if (s[index] == target)
		return ((char *)&s[index]);
	return (NULL);
}
