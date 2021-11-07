/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:43:52 by marvin            #+#    #+#             */
/*   Updated: 2021/11/05 14:43:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_check(const char flag)
{
	return (ft_strchr("cspdiuxX%", flag) != 0);
}

static int	ft_printf_switch(va_list params, char flag)
{
	int	(*ft_display[128])(va_list);

	ft_display['c'] = &ft_display_char;
	ft_display['s'] = &ft_display_str;
	ft_display['p'] = &ft_display_ptr;
	ft_display['d'] = &ft_display_decimal;
	ft_display['i'] = &ft_display_integer;
	ft_display['u'] = &ft_display_udecimal;
	ft_display['x'] = &ft_display_hex;
	ft_display['X'] = &ft_display_hexcap;
	ft_display['%'] = &ft_display_percent;
	return (ft_display[flag](params));
}

int	ft_printf(const char *format, ...)
{
	va_list params;
	int		size;

	size = 0;
	va_start(params, format);
	while (*format)
	{
		if (*format == '%' && ft_printf_check(*(format + 1)))
			size += ft_printf_switch(params, format + 1);
		else
		{
			ft_putchar_fd(*format, 1);
			size++;
		}
		format++;
	}
	va_end(params);
	return (size);
}