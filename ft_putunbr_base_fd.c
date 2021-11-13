/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:15:57 by hlefevre          #+#    #+#             */
/*   Updated: 2021/11/13 14:31:19 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

static void	ft_putunbr_recursive(unsigned long nbr, char *base, int fd)
{
	int	base_size;

	base_size = ft_strlen(base);
	if (nbr > 0)
	{
		ft_putunbr_recursive(nbr / base_size, base, fd);
		ft_putchar_fd(base[nbr % base_size], fd);
	}
}

void	ft_putunbr_base_fd(unsigned long nbr, char *base, int fd)
{
	int	base_size;

	base_size = ft_check_base(base);
	if (base_size)
	{
		if (nbr == 0)
			ft_putchar_fd(base[0], fd);
		else
			ft_putunbr_recursive(nbr, base, fd);
	}
}
