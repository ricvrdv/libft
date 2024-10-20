# Makefile for libft.a

# Compiler
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Name of the static library
NAME = libft.a

# Source files
SRCS = 

# Object files (generated from SRCS)
OBJS = $(SRCS:.c=.o)

# Rule to build the static library
all: $(NAME)

# Rule to create libft.a from object files
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to clean up object files
clean:
	rm -f $(OBJS)

# Rule to clean everything, including the library
fclean: clean
	rm -f $(NAME)

# Rule to recompile everything from scratch
re: fclean all