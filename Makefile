NAME = pushswap
SRCS = ./mini_lib/ft_atoi.c \
		main.c mem_alloc.c  stack_utils.c
CC = gcc
FLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
RM = rm -rf

all: $(NAME)
$(NAME):	$(OBJS)
			@echo "Compiling $@"
			@$(CC) $(FLAGS) $(OBJS) -o $@
			@echo "Success"
.cpp.o:
	@echo "Compiling $@"
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "Removing .o"
	@$(RM) $(OBJS)
fclean:	clean
		@echo "Removing Executable"
		@$(RM) $(NAME)
re: fclean all 