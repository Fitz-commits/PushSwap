#ifndef PUSHSWAP_H
# define PUSHSWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	s_stack {
	int *stack;
	int size;
}	t_stack;

int						init_both_stack(t_stack **stack_a, t_stack ** stack_b, int size);
t_stack					*init_stack(int size);
int						ft_atoi(const char *str);



// DEBUGGING ONLY
void					print_stack(t_stack *stack);
#endif