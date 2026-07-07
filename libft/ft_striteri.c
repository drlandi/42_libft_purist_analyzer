/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 21:41:48 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:21:16 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	string_index;

	if (s == NULL || f == NULL)
		return ;
	string_index = 0;
	while (s[string_index] != '\0')
	{
		f((unsigned int)string_index, &s[string_index]);
		string_index++;
	}
}
