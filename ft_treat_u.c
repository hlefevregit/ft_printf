/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:48:44 by hlefevre          #+#    #+#             */
/*   Updated: 2021/11/09 11:17:14 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_u(va_list params)
{
	unsigned int	udecimal;
	size_t			size;

	size = 0;
	udecimal = (unsigned int) va_arg(params, unsigned int);
	ft_putunbr_fd(udecimal, 1);
	if (udecimal == 0)
		return (1);
	while (udecimal != 0)
	{
		udecimal /= 10;
		size++;
	}
	return (size);
}
