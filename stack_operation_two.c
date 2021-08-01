/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operation_two.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 21:44:55 by chris             #+#    #+#             */
/*   Updated: 2021/08/01 21:44:56 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	ft_putendl_fd("rr", STDOUT_FILENO);
}

void	rra(t_stack *stack_a, int print)
{
	int	temp;
	int	i;

	i = stack_a->size - 1;
	temp = stack_a->stack[stack_a->size - 1];
	while (i > 0)
	{
		stack_a->stack[i] = stack_a->stack[i - 1];
		i--;
	}
	stack_a->stack[0] = temp;
	if (print == 1)
		ft_putendl_fd("rra", 1);
}

void	rrb(t_stack *stack_b, int print)
{
	int	temp;
	int	i;

	i = stack_b->size - 1;
	temp = stack_b->stack[stack_b->size - 1];
	while (i > 0)
	{
		stack_b->stack[i] = stack_b->stack[i - 1];
		i--;
	}
	stack_b->stack[0] = temp;
	if (print == 1)
		ft_putendl_fd("rra", 1);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	ft_putendl_fd("rrr", 1);
}
