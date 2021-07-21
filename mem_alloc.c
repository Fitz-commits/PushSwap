#include "pushswap.h"

t_stack *init_stack(int size)
{
	t_stack *ret;

	ret = malloc(sizeof(t_stack));
	if (!ret)
		return (NULL);
	ret->stack = malloc(sizeof(int) * size);
	ret->size = size;
	if (!ret->stack)
	{
		free(ret);
		ret = NULL;
	}
	return (ret);
}

int init_both_stack(t_stack **stack_a, t_stack ** stack_b, int size)
{
	*stack_a = init_stack(size);
	if (!*stack_a)
		return (EXIT_FAILURE);
	*stack_b = init_stack(size);
	if (!stack_b)
	{
		free((*stack_a)->stack);
		free(stack_a);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}