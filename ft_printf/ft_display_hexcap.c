/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_hexcap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:27:37 by marvin            #+#    #+#             */
/*   Updated: 2021/11/05 15:27:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_display_hexcap(va_list params)
{
	unsigned int	u;
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