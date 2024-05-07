/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_xcap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:23:34 by hulefevr          #+#    #+#             */
/*   Updated: 2024/04/23 14:01:27 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_xcap(va_list params)
{
	unsigned int	d;
	int				size;

	size = 0;
	d = (unsigned int) va_arg(params, unsigned int);
	ft_putunbr_base_fd(d, "0123456789ABCDEF", 1);
	if (d == 0)
		return (1);
	while (d != 0)
	{
		d /= 16;
		size++;
	}
	return (size);
}
