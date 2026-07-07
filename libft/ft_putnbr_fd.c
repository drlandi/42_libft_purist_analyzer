/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 23:48:11 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:20:58 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number_working_copy;

	number_working_copy = n;
	if (number_working_copy < 0)
	{
		ft_putchar_fd('-', fd);
		number_working_copy = -number_working_copy;
	}
	if (number_working_copy >= 10)
	{
		ft_putnbr_fd((int)(number_working_copy / 10), fd);
	}
	ft_putchar_fd((char)((number_working_copy % 10) + '0'), fd);
}
