CC = gcc
AR= ar 
NAME = libft.a
SRC = $(wildcard *.c)
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
	$(CC) holdup/$@.c -o $@ $<

.PHONY: all clean fclean re test
