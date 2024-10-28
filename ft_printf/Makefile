# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javmedin <javmedin@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/13 21:28:42 by javmedin          #+#    #+#              #
#    Updated: 2024/10/28 19:47:48 by javmedin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c ft_putnbr.c ft_uns_num.c ft_point_hexa.c \
				ft_putstr.c ft_strlen.c ft_hexa_mincap.c ft_hexa_cap.c

INCLUDE = ft_printf.h

CC = gcc
RM = rm -f
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror

%.o: %.c ${INCLUDE} 
			@${CC} ${CFLAGS} -c $< -o $@

OBJS = ${SRCS:.c=.o}

all:	${NAME}

${NAME}: ${OBJS}
		@${AR} ${NAME} ${OBJS}

clean:
		@${RM} ${OBJS}

fclean:
		@${RM} ${OBJS}
		@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re