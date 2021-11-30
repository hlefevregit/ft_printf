/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:15:57 by hlefevre          #+#    #+#             */
/*   Updated: 2021/11/16 14:41:35 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr_base(unsigned long nbr, char *base)
{
	if (nbr >= 16)
	{
		ft_putunbr_base(nbr / 16, base);
		ft_putchar_fd(base[nbr % 16], 1);
	}
	else
		ft_putchar_fd(base[nbr], 1);
}
