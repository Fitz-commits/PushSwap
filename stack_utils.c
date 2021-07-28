#include "pushswap.h"

void print_stack(t_stack *stack)
{
	for (int i = 0; i < stack->size; i++)
		printf("%d\n", stack->stack[i]);
}

int find_min(t_stack *stack)
{
	int i;
	int min;

	i = 0;
	min = INT32_MAX;
	while (i < stack->size)
	{
		if (stack->stack[i] < min)
			min = stack->stack[i];
		i++;
	}
	return (min);
}

int find_max(t_stack *stack)
{
	int i;
	int max;

	i = 0;
	max = INT32_MIN;
	while (i < stack->size)
	{
		if (stack->stack[i] > max)
			max = stack->stack[i];
		i++;
	}
	return (max);
}