/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 21:44:44 by chris             #+#    #+#             */
/*   Updated: 2021/08/01 21:44:45 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	init_radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*copy;

	copy = copy_stack(stack_a);
	if (!copy)
	{
		free_both_stack(stack_a, stack_b);
		unvalid_exit("ENOMEN");
	}
	bubble_sort(copy);
	map(stack_a, copy);
	radix_sort(stack_a, stack_b);
	free(copy->stack);
	free(copy);
}

void	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	max_bits;
	int	i;
	int	j;
	int	size;

	size = stack_a->size;
	max_bits = 0;
	while (((size - 1) >> max_bits) != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((stack_a->stack[0]) >> i) & 1) == 1)
				ra(stack_a, 1);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (stack_b->size)
			pa(stack_a, stack_b);
		i++;
	}
}
