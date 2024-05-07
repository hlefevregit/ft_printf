/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:07:52 by hulefevr          #+#    #+#             */
/*   Updated: 2024/04/24 13:41:30 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_treatflag(char patoche, va_list arg)
{
	if (patoche == 'c')
		return (ft_treat_c(arg));
	if (patoche == 's')
		return (ft_treat_s(arg));
	if (patoche == 'p')
		return (ft_treat_p(arg));
	if (patoche == 'd')
		return (ft_treat_d(arg));
	if (patoche == 'i')
		return (ft_treat_i(arg));
	if (patoche == 'u')
		return (ft_treat_u(arg));
	if (patoche == 'x')
		return (ft_treat_x(arg));
	if (patoche == 'X')
		return (ft_treat_xcap(arg));
	if (patoche == '%')
		return (ft_treat_percent(arg));
	return (0);
}

int	ft_printf(const char *patoche, ...)
{
	va_list	arg;
	int		size;
	int		i;

	i = 0;
	size = 0;
	va_start(arg, patoche);
	while (patoche[i])
	{
		if (patoche[i] == '%')
		{
			i++;
			size += ft_treatflag(patoche[i], arg);
		}
		else
		{
			ft_putchar_fd(patoche[i], 1);
			size++;
		}
		i++;
	}
	va_end(arg);
	return (size);
}
