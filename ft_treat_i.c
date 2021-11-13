/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:48:42 by hlefevre          #+#    #+#             */
/*   Updated: 2021/11/09 11:03:24 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_i(va_list params)
{
	size_t	size;
	int		i;

	size = 0;
	i = (int) va_arg(params, int);
	ft_putnbr_fd(i, 1);
	if (i == 0)
		return (1);
	if (i < 0)
		size++;
	while (i != 0)
	{
		i /= 10;
		size++;
	}
	return (size);
}
