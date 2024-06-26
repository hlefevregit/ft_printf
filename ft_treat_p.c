/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:17:57 by hulefevr          #+#    #+#             */
/*   Updated: 2024/04/23 14:04:08 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_p(va_list params)
{
	unsigned long	adress;
	void			*ptr;
	int				size;

	size = 0;
	ptr = (void *) va_arg(params, void *);
	adress = (unsigned long) ptr;
	if (adress == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putstr_fd("0x", 1);
	ft_putunbr_base_fd(adress, "0123456789abcdef", 1);
	while (adress != 0)
	{
		adress /= 16;
		size++;
	}
	return (size + 2);
}
