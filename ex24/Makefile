NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCDIR = srcs
INCLUDES = includes
OBJ = $(SRC:.c=.o)
AR = ar
ARFLAGS = rvcs

all: $(NAME)

%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -I./$(INCLUDES) -c -o $@ $^

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
