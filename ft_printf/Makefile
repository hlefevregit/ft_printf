# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 10:59:12 by marvin            #+#    #+#              #
#    Updated: 2021/11/06 10:59:12 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_display_char.c \
		ft_display_dec.c \
		ft_display_hex.c \
		ft_display_hexcap.c \
		ft_display_int.c \
		ft_display_percent.c \
		ft_display_ptr.c \
		ft_display_str.c \
		ft_display_udec.c \
		ft_printf.c \
		ft_putunbr_base_fd.c \
		ft_putunbr_fd.c \

OBJ =	{SRCS:.c=.o}

CC =	gcc

CFLAGS	= 	-wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJ}
		$(MAKE) -C ./libft
		cp libft/libft.a $(NAME)
		ar rcs ${NAME} ${OBJ}

all: ${NAME}

clean:
		$(MAKE) clean -C ./libft
		rm -f ${OBJ}

fclean: clean
		$(MAKE) fclean -C ./libft
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re