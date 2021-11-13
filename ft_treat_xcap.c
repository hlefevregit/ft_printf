/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_xcap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:49:07 by hlefevre          #+#    #+#             */
/*   Updated: 2021/11/13 14:36:48 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_xcap(va_list params)
{
	unsigned int	d;
	int				size;

	size = 0;
	d = (unsigned int) va_arg(params, unsigned int);
	ft_putunbr_base_fd(d, "01234565789ABCDEF", 1);
	if (d == 0)
		return (1);
	while (d != 0)
	{
		d /= 16;
		size++;
	}
	return (size);
}
