/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:48:55 by hlefevre          #+#    #+#             */
/*   Updated: 2021/11/09 11:02:19 by hlefevre         ###   ########.fr       */
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
