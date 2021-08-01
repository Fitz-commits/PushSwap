/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operation_three.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 21:44:51 by chris             #+#    #+#             */
/*   Updated: 2021/08/01 21:44:52 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	int	temp;
	int	i;

	i = 0;
	if (stack_b->size == 0)
		return ;
	temp = stack_b->stack[0];
	while (i < stack_b->size - 1)
	{
		stack_b->stack[i] = stack_b->stack[i + 1];
		i++;
	}
	stack_b->size -= 1;
	i = stack_a->size;
	while (i > 0)
	{
		stack_a->stack[i] = stack_a->stack[i - 1];
		i--;
	}
	stack_a->stack[0] = temp;
	stack_a->size += 1;
	ft_putendl_fd("pa", 1);
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	int	temp;
	int	i;

	i = 0;
	if (stack_a->size == 0)
		return ;
	temp = stack_a->stack[0];
	while (i < stack_a->size - 1)
	{
		stack_a->stack[i] = stack_a->stack[i + 1];
		i++;
	}
	stack_a->size -= 1;
	i = stack_b->size;
	while (i > 0)
	{
		stack_b->stack[i] = stack_b->stack[i - 1];
		i--;
	}
	stack_b->stack[0] = temp;
	stack_b->size += 1;
	ft_putendl_fd("pb", 1);
}
