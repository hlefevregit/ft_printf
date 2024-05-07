/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:12:18 by hulefevr          #+#    #+#             */
/*   Updated: 2024/04/24 13:41:40 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putunbr_recursive(unsigned long nbr, char *base, int fd)
{
	int	size;

	size = ft_strlen(base);
	if (nbr > 0)
	{
		ft_putunbr_recursive(nbr / size, base, fd);
		ft_putchar_fd(base[nbr % size], fd);
	}
}

void	ft_putunbr_base_fd(unsigned long nbr, char *base, int fd)
{
	if (nbr == 0)
		ft_putchar_fd(base[0], fd);
	else
		ft_putunbr_recursive(nbr, base, fd);
}
