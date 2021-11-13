/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:48:32 by hlefevre          #+#    #+#             */
/*   Updated: 2021/11/09 11:02:30 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_c(va_list params)
{
	char	c;

	c = (char) va_arg(params, int);
	ft_putchar_fd(c, 1);
	return (1);
}
