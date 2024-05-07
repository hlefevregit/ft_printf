/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:22:59 by hulefevr          #+#    #+#             */
/*   Updated: 2024/04/23 14:01:22 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_x(va_list params)
{
	unsigned int	d;
	int				size;

	size = 0;
	d = (unsigned int) va_arg(params, unsigned int);
	ft_putunbr_base_fd(d, "0123456789abcdef", 1);
	if (d == 0)
		return (1);
	while (d != 0)
	{
		d /= 16;
		size++;
	}
	return (size);
}
