/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 21:44:59 by chris             #+#    #+#             */
/*   Updated: 2021/08/01 21:45:00 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	find_min(t_stack *stack)
{
	int	i;
	int	min;

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

int	find_max(t_stack *stack)
{
	int	i;
	int	max;

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

t_stack	*copy_stack(t_stack *stack)
{
	t_stack	*copy;
	int		i;

	i = 0;
	copy = init_stack(stack->size);
	if (!copy)
		return (NULL);
	while (i < stack->size)
	{
		copy->stack[i] = stack->stack[i];
		i++;
	}
	return (copy);
}

int	up_or_down(t_stack *stack_a, int number)
{
	int	middle;

	middle = stack_a->size / 2;
	if (stack_a->stack[middle] < number)
		return (1);
	else
		return (-1);
}

int	is_ordered(t_stack *stack)
{
	int	c;
	int	d;

	c = 0;
	while (c < stack->size - 1)
	{
		d = 0;
		while (d < stack->size - c - 1)
		{
			if (stack->stack[d] > stack->stack[d + 1])
				return (0);
			d++;
		}
		c++;
	}
	return (1);
}
