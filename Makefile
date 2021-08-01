LIBFT_ROOT = ./mini_lib

NAME = push_swap
SRCS =	main.c mem_alloc.c  stack_utils.c stack_operation_one.c \
	stack_operation_two.c stack_operation_three.c little_stack.c \
	mapper.c radix_sort.c is_valid.c
CC = gcc
FLAGS = -Wall -Wextra -Werror -fsanitize=address
OBJS = $(SRCS:.c=.o)
RM = rm -rf

all: libft_all $(NAME)
$(NAME):	$(OBJS)
			@echo "Compiling $@"
			@$(CC) $(FLAGS) $(OBJS) $(LIBFT_ROOT)/minilib.a -o $@
			@echo "Success"
.c.o:
	@echo "Compiling $@"
	@$(CC) $(FLAGS) -c $< -o $@

clean: libft_clean
	@echo "Removing .o"
	@$(RM) $(OBJS)
fclean:	libft_fclean
		@echo "Removing .o"
		@$(RM) $(OBJS)
		@echo "Removing Executable"
		@$(RM) $(NAME)
re: fclean all 

libft_all:
		@$(MAKE) -C $(LIBFT_ROOT) all

libft_clean:
		@$(MAKE) -C $(LIBFT_ROOT) clean

libft_fclean:
		@$(MAKE) -C $(LIBFT_ROOT) fclean