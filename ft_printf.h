/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:06:35 by hulefevr          #+#    #+#             */
/*   Updated: 2024/04/24 16:17:44 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "./libft/libft.h"

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
