NAME = libftprintf.a
FILES = ft_print_c.c ft_print_s.c ft_print_p.c ft_print_d.c ft_print_u.c ft_print_lower_x.c ft_print_uper_X.c
FILES_o =  ft_print_c.o ft_print_s.o ft_print_p.o ft_print_d.o ft_print_u.o ft_print_lower_x.o ft_print_uper_X.o
C_FLAGS = -Wall -Wextra -Werror
CC = cc
all: $(NAME)

$(NAME): $(FILES_o)
	ar -rc $(NAME) $(FILES_o)

$(FILES_o): $(FILES)
	$(CC) $(C_FLAGS) $(FILES) -c

clean:
	rm -f $(FILES_o)

fclean: clean
	rm -f $(NAME)

re: fclean all
