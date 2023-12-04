
NAME = libftprintf.a

SRC = ft_printf.c \
	  ft_putchar_pf.c \
      ft_putstr_pf.c \
      ft_putnbr_pf.c \
      ft_putuint_pf.c \
      ft_puthex_pf.c \
      ft_putptr_pf.c \
      ft_auxiliar_pf.c \

OBJS = $(SRC:.c=.o)
DEP = $(SRC:.c=.d)
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar -crs
INC = ft_printf.h
all : $(NAME)

-include $(DEP)
%.o:%.c Makefile
	$(CC) -MMD $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
