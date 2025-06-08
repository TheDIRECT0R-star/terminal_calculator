# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = main.c utils.c calculator.c

# Output executable
NAME = calc

# Default target
all: $(NAME)

# Build executable
$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

# Clean object files (if any, none here but good practice)
clean:
	rm -f *.o

# Remove executable
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re

