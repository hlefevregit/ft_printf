/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:13:59 by hulefevr          #+#    #+#             */
/*   Updated: 2024/04/24 13:40:58 by hulefevr         ###   ########.fr       */
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
