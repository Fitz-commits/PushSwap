#ifndef PUSHSWAP_H
# define PUSHSWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./mini_lib/minilib.h"

typedef struct	s_stack {
	int *stack;
	int size;
}	t_stack;

int						init_both_stack(t_stack **stack_a, t_stack ** stack_b, int size);
t_stack					*init_stack(int size);



//STACK OPERATIONS
void					sa(t_stack *stack_a, int print);
void					sb(t_stack *stack_b, int print);
void					ss(t_stack *stack_a, t_stack *stack_b);
void					ra(t_stack *stack_a, int print);
void					rb(t_stack *stack_b, int print);
void					rra(t_stack *stack_a, int print);
void					pa(t_stack *stack_a, t_stack *stack_b);
void					pb(t_stack *stack_a, t_stack *stack_b);

void					three_number(t_stack *stack_a);
void					four_number(t_stack *stack_a, t_stack *stack_b);
void					five_number(t_stack *stack_a, t_stack *stack_b);
int						find_min(t_stack *stack);
int						find_max(t_stack *stack);

// DEBUGGING ONLY
void					print_stack(t_stack *stack);
#endif