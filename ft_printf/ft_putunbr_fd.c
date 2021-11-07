/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:48:34 by marvin            #+#    #+#             */
/*   Updated: 2021/11/06 10:48:34 by marvin           ###   ########.fr       */
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
		ft_putchar_fd(nbr + '0');
	else
		ft_putunbr_recusrive_fd(nbr, fd);
}