#include "pushswap.h"

int			main(int ac, char **av)
{
	int i;
	t_stack *stack_a;
	t_stack *stack_b;

	i = 0;
	if (init_both_stack(&stack_a, &stack_b, ac - 1))
		return (1);
	if (ac == 1)
		return (1);
	while (i < ac - 1)
	{
		stack_a->stack[i] = ft_atoi(av[i + 1]);
		i++;
	}
	stack_b->size = 0;
	// Need some test on stack operation
	if (ac == 4)
		three_number(stack_a);
	if (ac == 5)
		four_number(stack_a, stack_b);
	if (ac == 6)
		five_number(stack_a, stack_b);
}