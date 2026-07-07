/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 20:46:24 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:21:39 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_index;
	size_t	little_index;

	big_index = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[big_index] != '\0' && big_index < len)
	{
		little_index = 0;
		while (big[big_index + little_index] == little[little_index]
			&& (big_index + little_index) < len)
		{
			if (little[little_index + 1] == '\0')
				return ((char *)&big[big_index]);
			little_index++;
		}
		big_index++;
	}
	return (NULL);
}
