# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Project name (the output binary)
NAME = libft.a

# Source and object files
SRC = main.c utils.c
OBJ = $(SRC:.c=.o)

# Default rule
all: $(NAME)

# How to build the binary
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# Clean object files
clean:
	rm -f $(OBJ)

# Clean everything: object files + binary
fclean: clean
	rm -f $(NAME)

# Rebuild from scratch
re: fclean all

# Optional: avoid conflicts with files named "clean", etc.
.PHONY: all clean fclean re
