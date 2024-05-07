/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:13:06 by hulefevr          #+#    #+#             */
/*   Updated: 2024/04/22 16:13:17 by hulefevr         ###   ########.fr       */
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
