/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 21:44:19 by chris             #+#    #+#             */
/*   Updated: 2021/08/01 21:44:20 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
/*
** Find every ways that an array of 3 can be arranged and sort it
*/
void	three_number(t_stack *stack_a)
{
	if (stack_a->stack[2] > stack_a->stack[0]
		&& stack_a->stack[0] > stack_a->stack[1])
		return (sa(stack_a, 1));
	if (stack_a->stack[0] > stack_a->stack[1]
		&& stack_a->stack[1] > stack_a->stack[2])
	{
		sa(stack_a, 1);
		rra(stack_a, 1);
		return ;
	}
	if (stack_a->stack[0] > stack_a->stack[2]
		&& stack_a->stack[2] > stack_a->stack[1])
		return (ra(stack_a, 1));
	if (stack_a->stack[1] > stack_a->stack[2]
		&& stack_a->stack[2] > stack_a->stack[0])
	{
		sa(stack_a, 1);
		ra(stack_a, 1);
		return ;
	}
	if (stack_a->stack[1] > stack_a->stack[0]
		&& stack_a->stack[0] > stack_a->stack[2])
		return (rra(stack_a, 1));
}

void	adjust(t_stack *stack_a)
{
	int	min;
	int	up_down;
	int	i;

	i = 0;
	min = find_min(stack_a);
	while (i < stack_a->size - 1 && stack_a->stack[i] != min)
		i++;
	if (i > stack_a->size / 2)
		up_down = -1;
	else
		up_down = 1;
	while (min != stack_a->stack[0])
	{
		if (up_down == 1)
			ra(stack_a, 1);
		else
			rra(stack_a, 1);
	}
}
/*
** Push one on stack_b and get back to base case 3 and then merge
*/

void	four_number(t_stack *stack_a, t_stack *stack_b)
{
	adjust(stack_a);
	pb(stack_a, stack_b);
	three_number(stack_a);
	pa(stack_a, stack_b);
}
/*
** Push two on stack_b and get back to base case 3 and then merge
*/

void	five_number(t_stack *stack_a, t_stack *stack_b)
{
	adjust(stack_a);
	pb(stack_a, stack_b);
	adjust(stack_a);
	pb(stack_a, stack_b);
	three_number(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
