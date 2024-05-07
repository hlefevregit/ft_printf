/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:19:27 by hulefevr          #+#    #+#             */
/*   Updated: 2024/04/22 16:19:29 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_s(va_list params)
{
	char	*str;

	str = (char *) va_arg(params, char *);
	if (str != NULL)
	{
		ft_putstr_fd(str, 1);
		return (ft_strlen(str));
	}
	ft_putstr_fd("(null)", 1);
	return (6);
}
