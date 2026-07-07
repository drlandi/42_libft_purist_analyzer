/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 17:40:50 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:21:34 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cmp_index;

	cmp_index = 0;
	if (n == 0)
		return (0);
	while (s1[cmp_index] != '\0' && s1[cmp_index] == s2[cmp_index]
		&& cmp_index < (n - 1))
	{
		cmp_index++;
	}
	return ((unsigned char)s1[cmp_index] - (unsigned char)s2[cmp_index]);
}
