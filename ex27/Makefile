NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_putchar.c main.c
SRCDIR = srcs
INCLUDES = includes
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -I./$(INCLUDES) -c -o $@ $^

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I./$(INCLUDES) -o $@ $^

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
