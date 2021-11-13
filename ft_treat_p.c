/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:48:37 by hlefevre          #+#    #+#             */
/*   Updated: 2021/11/13 14:31:01 by hlefevre         ###   ########.fr       */
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
	ft_putstr_fd("0x", 1);
	ft_putunbr_base_fd(adress, "0123456789abcdef", 1);
	if (adress == 0)
		return (3);
	while (adress != 0)
	{
		adress /= 16;
		size++;
	}
	return (size + 2);
}
