/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:48:39 by hlefevre          #+#    #+#             */
/*   Updated: 2021/11/09 11:09:24 by hlefevre         ###   ########.fr       */
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
