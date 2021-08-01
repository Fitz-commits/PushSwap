/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 21:44:30 by chris             #+#    #+#             */
/*   Updated: 2021/08/01 21:46:17 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	bubble_sort(t_stack *stack)
{
	int	c;
	int	d;
	int	swap;

	c = 0;
	while (c < stack->size - 1)
	{
		d = 0;
		while (d < stack->size - c - 1)
		{
			if (stack->stack[d] > stack->stack[d + 1])
			{
				swap = stack->stack[d];
				stack->stack[d] = stack->stack[d + 1];
				stack->stack[d + 1] = swap;
			}
			d++;
		}
		c++;
	}
}

void	map(t_stack *stack_a, t_stack *copy)
{
	int	i;
	int	j;
	int	test[MAX_STACK];

	i = 0;
	while (i < MAX_STACK)
		test[i++] = 0;
	i = 0;
	while (i < copy->size)
	{
		j = 0;
		while (j < stack_a->size)
		{
			if (stack_a->stack[j] == copy->stack[i] && test[i] == 0)
			{
				stack_a->stack[j] = i;
				test[i] = 1;
				continue ;
			}
			j++;
		}
		i++;
	}
}
