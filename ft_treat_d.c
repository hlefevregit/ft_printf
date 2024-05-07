/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:14:34 by hulefevr          #+#    #+#             */
/*   Updated: 2024/04/22 16:15:18 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_d(va_list params)
{
	size_t	size;
	int		decimal;

	size = 0;
	decimal = (int) va_arg(params, int);
	ft_putnbr_fd(decimal, 1);
	if (decimal == 0)
		return (1);
	if (decimal < 0)
		size++;
	while (decimal != 0)
	{
		decimal /= 10;
		size++;
	}
	return (size);
}
