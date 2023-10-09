FILES = ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLS = libft.h
HEADERS = $(INCLS)
CFILES = $(addsuffix .c, $(FILES))
OFILES = $(addsuffix .o, $(FILES))
NAME = libft.a
$(NAME): $(OFILES)
		$(CC) $(CFLAGS) -c $(CFILES) -I./
		ar rcs $(NAME) $(OFILES)
all:	$(NAME)
clean:
		rm -f *.o
fclean:	clean
		rm -f $(NAME)
re:	fclean all

.PHONY: all clean fclean re