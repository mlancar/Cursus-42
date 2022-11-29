# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malancar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 18:21:12 by malancar          #+#    #+#              #
#    Updated: 2022/11/23 13:41:51 by malancar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC	= gcc

RM	= rm -f

NAME	= libft.a

CFLAGS	= -Wextra -Werror -Wall

SRC =	ft_calloc.c	\
	ft_bzero.c	\
	ft_atoi.c	\
	ft_itoa.c	\
	ft_isascii.c	\
	ft_isdigit.c	\
	ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isprint.c	\
	ft_memchr.c	\
	ft_memcmp.c	\
	ft_memcpy.c	\
	ft_memmove.c	\
	ft_memset.c	\
	ft_strlcat.c	\
	ft_strlcpy.c	\
	ft_strlen.c	\
	ft_strncmp.c	\
	ft_strnstr.c	\
	ft_strrchr.c	\
	ft_strchr.c	\
	ft_strtrim.c	\
	ft_strdup.c	\
	ft_strjoin.c	\
	ft_substr.c	\
	ft_tolower.c	\
	ft_toupper.c	\
	ft_putchar_fd.c	\
	ft_putendl_fd.c	\
	ft_putnbr_fd.c	\
	ft_putstr_fd.c	\
	ft_strmapi.c	\
	ft_striteri.c	\
	ft_split.c

BONUS = ft_lstnew.c	\
	ft_lstadd_front.c	\
	ft_lstsize.c	\
	ft_lstlast.c	\
	ft_lstadd_back.c	\
	ft_lstdelone.c	\
	ft_lstclear.c	\
	ft_lstiter.c	\
	ft_lstmap.c
	

OBJ_BONUS = $(BONUS:.c=.o)

OBJ =	$(SRC:.c=.o)

HEADER = libft.h

all:	$(NAME)

bonus:	$(OBJ) $(OBJ_BONUS)
	ar -rcs $(NAME) $(OBJ) $(OBJ_BONUS) 

$(NAME):	 $(OBJ) $(HEADER)
	ar -rcs $(NAME) $(OBJ)

%.o:	%.c
	@$(CC) $(FLAGS) -o $@ -c $^
clean:
	@$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY: all fclean clean re
