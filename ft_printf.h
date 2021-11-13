/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:57:27 by hlefevre          #+#    #+#             */
/*   Updated: 2021/11/13 14:31:38 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *patoche, ...);
int		ft_treat_c(va_list params);
int		ft_treat_s(va_list params);
int		ft_treat_p(va_list params);
int		ft_treat_i(va_list params);
int		ft_treat_x(va_list params);
int		ft_treat_xcap(va_list params);
int		ft_treat_d(va_list params);
int		ft_treat_u(va_list params);
int		ft_treat_percent(va_list params);

void	ft_putunbr_base_fd(unsigned long nbr, char *base, int fd);
void	ft_putunbr_fd(unsigned int nbr, int fd);

#endif