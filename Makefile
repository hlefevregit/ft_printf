# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 16:05:23 by hulefevr          #+#    #+#              #
#    Updated: 2024/04/23 10:46:38 by hulefevr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_treat_c.c \
		ft_treat_d.c \
		ft_treat_i.c \
		ft_treat_p.c \
		ft_treat_percent.c \
		ft_treat_s.c \
		ft_treat_u.c \
		ft_treat_x.c \
		ft_treat_xcap.c \
		ft_printf.c \
		ft_putunbr_base_fd.c \
		ft_putunbr_fd.c \

OBJ =	${SRCS:.c=.o}

CC =	gcc

CFLAGS	= 	-Wall -Wextra -Werror

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): ${OBJ}
		@make -C ./libft
		cp libft/libft.a $(NAME)
		ar rcs ${NAME} ${OBJ}

all: ${NAME}

clean:
		@make clean -C ./libft
		rm -f ${OBJ}

fclean: clean
		@make fclean -C ./libft
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re
