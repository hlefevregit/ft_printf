/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:44:47 by marvin            #+#    #+#             */
/*   Updated: 2021/11/05 14:44:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_display_char(va_list params);
int	ft_display_str(va_list params);
int	ft_display_int(va_list params);
int	ft_display_hex(va_list params);
int	ft_display_hex_cap(va_list params);
int	ft_display_dec(va_list params);
int	ft_display_udec(va_list params);
int	ft_display_ptr(va_list params);
int	ft_display_percent(va_list params);

void	ft_putunbr_fd(unsigned int nbr, int fd);
void	ft_putunbr_base_fd(unsigned long nbr, char *base, int fd);

#endif