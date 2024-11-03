# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javmedin <javmedin@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/13 21:28:42 by javmedin          #+#    #+#              #
#    Updated: 2024/11/04 00:43:14 by javmedin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC = ft_strlen.c	\
				ft_putchar_fd.c		\
				ft_putstr_fd.c		\
				ft_putnbr_fd.c		\
				ft_printf.c			\
				ft_putnbr_base.c	\
				ft_putptr.c			\
				ft_putunsigned.c

OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJ) ft_printf.h Makefile
	$(AR) rcs $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re