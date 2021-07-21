#include "pushswap.h"

void print_stack(t_stack *stack)
{
	for (int i = 0; i < stack->size; i++)
		printf("%d\n", stack->stack[i]);
}