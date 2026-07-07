/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 21:26:41 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:19:36 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	calculate_number_length(long number)
{
	size_t	character_length;

	character_length = 0;
	if (number <= 0)
	{
		character_length++;
		if (number == 0)
			return (character_length);
		number = -number;
	}
	while (number > 0)
	{
		number = number / 10;
		character_length++;
	}
	return (character_length);
}

char	*ft_itoa(int n)
{
	char	*converted_string;
	long	number_working_copy;
	size_t	string_length;

	number_working_copy = n;
	string_length = calculate_number_length(number_working_copy);
	converted_string = (char *)ft_calloc((string_length + 1), sizeof(char));
	if (converted_string == NULL)
		return (NULL);
	if (number_working_copy < 0)
	{
		converted_string[0] = '-';
		number_working_copy = -number_working_copy;
	}
	if (number_working_copy == 0)
		converted_string[0] = '0';
	while (number_working_copy > 0)
	{
		string_length--;
		converted_string[string_length] = (number_working_copy % 10) + '0';
		number_working_copy = number_working_copy / 10;
	}
	return (converted_string);
}
