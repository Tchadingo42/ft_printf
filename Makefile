NAME    = libprintf.a

RM	= rm -f

HEADER	= ./include/my_printf.h

CFLAGS	= -W -Wall -ansi -pedantic

OBJS	= $(SRC:.c=.o)

SRC	= ft_function.c		\
	  ft_function2.c	\
	  ft_printf.c		\
	  ft_tools.c		\
	  ft_putstr_bis.c	\


CC	= gcc

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

.PHONY: all clean fclean re
