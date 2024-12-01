AR = ar rc

NAME = libftprintf.a

HEADER = ft_printf.h

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_utils.c ft_putnum.c ft_puthex.c ft_putpoint.c ft_printmix.c

OBJ = $(SRC:.c=.o)

all: ${NAME}

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all