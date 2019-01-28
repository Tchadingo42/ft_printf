# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chbelan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/28 16:59:56 by chbelan           #+#    #+#              #
#    Updated: 2019/01/28 19:27:12 by chbelan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	libprintf.a

RM		=	rm -rf

HEADER	= ./include/my_printf.h

CFLAGS	= -W -Wall -ansi -pedantic

OBJS	= $(SRC:.c=.o)

SRC		= ft_function.c		\
	  	ft_function2.c	\
	  	ft_printf.c		\
	  	ft_tools.c		\
	  	ft_putstr_bis.c	\

CC	= 	gcc

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)
	$(RM) *~
	$(RM) *#
	$(RM) *a.out

fclean: clean
	$(RM) $(NAME)
	$(RM) ../$(NAME)

re: fclean all
