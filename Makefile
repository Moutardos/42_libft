CC = gcc
AR= ar 
NAME = libft.a
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memcpy.c ft_memmove.c ft_memset.c ft_bzero.c ft_memcmp.c ft_memchr.c ft_tolower.c ft_toupper.c ft_atoi.c ft_calloc.c
OBJ = $(SRC:.c=.o)
RM = rm -f
LIBFLAGS = -cvq
CFLAGS = -Wall -Wextra -Werror -o

all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) $@ -c $<

$(NAME) : $(OBJ)
	$(AR) $(LIBFLAGS) $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)
	$(RM) test

re: fclean all

test: $(NAME)
	$(CC) $@.c -o $@ $<

.PHONY: all clean fclean re test
