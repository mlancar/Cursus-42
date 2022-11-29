# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malancar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 12:34:59 by malancar          #+#    #+#              #
#    Updated: 2022/11/29 12:19:30 by malancar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= gcc

RM	= rm -f

NAME	= libftprintf.a

CFLAGS	= -Wextra -Wall -Werror

SRC =	ft_printf.c	\
	ft_putchar.c	\
	ft_putstr.c	\
	ft_putnbr.c	\
	ft_putunbr.c	\
	ft_puthex.c	\
	ft_check_format.c	\
	ft_check_letter.c	


OBJ =	$(SRC:.c=.o)

HEADER =	libftprintf.h

all:	$(NAME)

$(NAME):	$(OBJ) $(HEADER)
	ar -rcs $(NAME) $(OBJ)

%.o:	%.c
	@$(CC) $(FLAGS) -o $@ -c $^

clean:
	@$(RM) $(OBJ)

fclean:	clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY: all fclean clean re
