/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:20:56 by hulefevr          #+#    #+#             */
/*   Updated: 2024/04/22 16:21:01 by hulefevr         ###   ########.fr       */
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
