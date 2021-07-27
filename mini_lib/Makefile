CC = gcc
FLAGS = -Wall -Werror -Wextra

NAME = minilib.a

SRC = ft_atoi.c ft_bzero.c ft_memset.c ft_strlen.c ft_putendl_fd.c \
	ft_putchar_fd.c
	
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiling minilib"
	@ar rc $(NAME) $(OBJ)
	@echo "Minilib compiled"
%.o: %.c
	@$(CC) $(FLAGS) -c -o $@ $<

clean:
	@echo "Removing minilib .o"
	@rm -f $(OBJ) ${OBJ_1}

fclean: clean
	@echo "Deleting library"
	@rm -f $(NAME)

re: fclean all