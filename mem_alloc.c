/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_alloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 21:44:39 by chris             #+#    #+#             */
/*   Updated: 2021/08/05 19:45:43 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_stack	*init_stack(int size)
{
	t_stack	*ret;

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

int	init_both_stack(t_stack **stack_a, t_stack **stack_b, int size)
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

void	free_both_stack(t_stack *stack_a, t_stack *stack_b)
{
	free(stack_b->stack);
	free(stack_b);
	free(stack_a->stack);
	free(stack_a);
}

int	init_and_assign(t_stack **stack_a, t_stack **stack_b, int ac, char **av)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	init_both_stack(stack_a, stack_b, ac - 1);
	if (!(*stack_b) || !(*stack_a))
		unvalid_exit("ENOMEN");
	while (i < ac - 1)
	{
		(*stack_a)->stack[i] = ft_atoi(av[i + 1], &flag);
		if (flag == 1)
		{
			free_both_stack(*stack_a, *stack_b);
			unvalid_exit("Error");
		}
		i++;
	}
	(*stack_b)->size = 0;
	return (0);
}
