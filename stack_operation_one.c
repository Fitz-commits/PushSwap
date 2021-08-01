/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operation_one.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 21:44:48 by chris             #+#    #+#             */
/*   Updated: 2021/08/01 21:44:49 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_stack *stack_a, int print)
{
	int	temp;

	temp = stack_a->stack[0];
	stack_a->stack[0] = stack_a->stack[1];
	stack_a->stack[1] = temp;
	if (print == 1)
		ft_putendl_fd("sa", 1);
}

void	sb(t_stack *stack_b, int print)
{
	int	temp;

	temp = stack_b->stack[0];
	stack_b->stack[0] = stack_b->stack[1];
	stack_b->stack[1] = temp;
	if (print == 1)
		ft_putendl_fd("sb", 1);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	ft_putendl_fd("ss", 1);
}

void	ra(t_stack *stack_a, int print)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack_a->stack[0];
	while (i < stack_a->size - 1)
	{
		stack_a->stack[i] = stack_a->stack[i + 1];
		i++;
	}
	stack_a->stack[i] = temp;
	if (print == 1)
		ft_putendl_fd("ra", 1);
}

void	rb(t_stack *stack_b, int print)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack_b->stack[0];
	while (i < stack_b->size - 1)
	{
		stack_b->stack[i] = stack_b->stack[i + 1];
		i++;
	}
	stack_b->stack[i] = temp;
	if (print == 1)
		ft_putendl_fd("rb", 1);
}
