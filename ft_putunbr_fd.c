/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:17:41 by hlefevre          #+#    #+#             */
/*   Updated: 2021/11/13 13:40:34 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putunbr_recursive_fd(unsigned int nbr, int fd)
{
	if (nbr > 0)
	{
		ft_putunbr_recursive_fd(nbr / 10, fd);
		ft_putchar_fd(nbr % 10 + '0', fd);
	}
}

void	ft_putunbr_fd(unsigned int nbr, int fd)
{
	if (nbr == 0)
		ft_putchar_fd(nbr + '0', 1);
	else
		ft_putunbr_recursive_fd(nbr, fd);
}
