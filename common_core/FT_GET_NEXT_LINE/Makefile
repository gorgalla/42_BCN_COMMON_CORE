NAME = get_next_line.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = get_next_line.c \
      get_next_line_utils.c

HEADER_F = get_next_line.h

OBJ = $(SRC:.c=.o)

all: $(NAME) Makefile

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADER_F)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

