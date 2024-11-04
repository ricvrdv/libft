CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS = PART_1/ft_isalpha.c \
       PART_1/ft_isdigit.c \
       PART_1/ft_isalnum.c \
       PART_1/ft_isascii.c \
       PART_1/ft_isprint.c \
       PART_1/ft_strlen.c \
       PART_1/ft_memset.c \
       PART_1/ft_bzero.c \
       PART_1/ft_memcpy.c \
       PART_1/ft_memmove.c \
       PART_1/ft_strlcpy.c \
       PART_1/ft_strlcat.c \
       PART_1/ft_toupper.c \
       PART_1/ft_tolower.c \
       PART_1/ft_strchr.c \
       PART_1/ft_strrchr.c \
       PART_1/ft_strncmp.c \
       PART_1/ft_memchr.c \
       PART_1/ft_memcmp.c \
       PART_1/ft_strnstr.c \
       PART_1/ft_atoi.c \
       PART_1/ft_calloc.c \
       PART_1/ft_strdup.c \
       PART_2/ft_substr.c \
       PART_2/ft_strjoin.c \
       PART_2/ft_strtrim.c \
       PART_2/ft_split.c \
       PART_2/ft_itoa.c \
       PART_2/ft_strmapi.c \
       PART_2/ft_striteri.c \
       PART_2/ft_putchar_fd.c \
       PART_2/ft_putstr_fd.c \
       PART_2/ft_putendl_fd.c \
       PART_2/ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

EXEC = a.out

BONUS = BONUS/ft_lstnew.c \
        BONUS/ft_lstadd_front.c \
        BONUS/ft_lstsize.c \
        BONUS/ft_lstlast.c \
        BONUS/ft_lstadd_back.c \
        BONUS/ft_lstdelone.c \
        BONUS/ft_lstclear.c \
        BONUS/ft_lstiter.c \
        BONUS/ft_lstmap.c

BONUS_OBJS = $(BONUS:.c=.o) $(OBJS)

all: $(NAME)

$(NAME):        $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re:     fclean all

bonus:  $(BONUS_OBJS)
	@make OBJS="$(BONUS_OBJS)" all

.PHONY: all, clean, fclean, re, bonus
