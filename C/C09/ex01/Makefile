# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 10:37:08 by lopoka            #+#    #+#              #
#    Updated: 2024/01/27 16:01:10 by lopoka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
INC = includes
NAME = libft.a
CRLIB = ar rcs
OFILES = ${SRCS:c=o}

${NAME} : ${OFILES}
	${CRLIB} ${NAME} ${OFILES}

all : ${NAME}

%.o : %.c
	${CC} ${CFLAGS} -c -o $@ $< -I ${INC}

clean :
	rm -f ${OFILES}

fclean :
	rm -f ${NAME} ${OFILES}

re : fclean all
