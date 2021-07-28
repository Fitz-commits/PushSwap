#include "pushswap.h"
/*
** Find every ways that an array of 3 can be arranged and sort it
*/
void		three_number(t_stack *stack_a)
{
	if (stack_a->stack[2] > stack_a->stack[0]
		&& stack_a->stack[0] > stack_a->stack[1])
		return sa(stack_a, 1);
	if (stack_a->stack[0] > stack_a->stack[1] &&
		stack_a->stack[1] > stack_a->stack[2])
	{
		sa(stack_a, 1);
		rra(stack_a, 1);
		return;
	}
	if (stack_a->stack[0] > stack_a->stack[2] &&
		stack_a->stack[2] > stack_a->stack[1])
		return (ra(stack_a, 1));
	if (stack_a->stack[1] > stack_a->stack[2] &&
		stack_a->stack[2] > stack_a->stack[0])
	{
		sa(stack_a, 1);
		ra(stack_a, 1);
		return;
	}
	if (stack_a->stack[1] > stack_a->stack[0] &&
		stack_a->stack[0] > stack_a->stack[2])
		return (rra(stack_a, 1));
}
/*
** Push one on stack_b and get back to base case 3 and then merge
*/
void		four_number(t_stack *stack_a, t_stack *stack_b)
{
	int min;

	pb(stack_a, stack_b);
	three_number(stack_a);
	if (stack_a->stack[0] > stack_b->stack[0])
		return (pa(stack_a, stack_b));
	if (stack_a->stack[stack_a->size - 1] < stack_b->stack[0])
	{
		pa(stack_a, stack_b);
		ra(stack_a, 1);
		return;
	}
	while (stack_a->stack[0] < stack_b->stack[0]
		&& stack_a->stack[stack_a->size - 1] > stack_b->stack[0])
		ra(stack_a, 1);
	pa(stack_a, stack_b);
	min = find_min(stack_a);
	while (min != stack_a->stack[0])
		ra(stack_a, 1);
}
/*
** Push two on stack_b and get back to base case 3 and then merge
*/
void		five_number(t_stack *stack_a, t_stack *stack_b)
{
	int min;

	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	three_number(stack_a);
	if (stack_b->stack[0] < stack_b->stack[1])
		rb(stack_b, 1);
	while (stack_b->size)
	{
		if ( stack_a->stack[stack_a->size - 1] == find_max(stack_a) &&
			stack_a->stack[stack_a->size - 1] < stack_b->stack[0])
		{
			pa(stack_a, stack_b);
			continue;
		}
		else if (stack_a->stack[0] > stack_b->stack[0])
			pa(stack_a, stack_b);
		else
			ra(stack_a, 1);
	}
	min = find_min(stack_a);
	while (stack_a->stack[0] != min)
		ra(stack_a, 1);
}

//Might want to calculate cost out of the two last as such we can rra instead of ra
// and also rb et ra avec rr si les deux operations sont necessaire
// but work as is