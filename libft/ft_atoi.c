/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 20:49:46 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:29:39 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	str_index;
	int		sign_modifier;
	int		calculated_result;

	str_index = 0;
	sign_modifier = 1;
	calculated_result = 0;
	while (str[str_index] == ' ' || (str[str_index] >= 9
			&& str[str_index] <= 13))
		str_index++;
	if (str[str_index] == '-' || str[str_index] == '+')
	{
		if (str[str_index] == '-')
			sign_modifier = -1;
		str_index++;
	}
	while (str[str_index] >= '0' && str[str_index] <= '9')
	{
		calculated_result = (calculated_result * 10) + (str[str_index] - '0');
		str_index++;
	}
	return (calculated_result * sign_modifier);
}
