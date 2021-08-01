/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 21:44:24 by chris             #+#    #+#             */
/*   Updated: 2021/08/01 21:49:29 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	choose_algo(t_stack *stack_a, t_stack *stack_b)
{
	if (check_duplicate(stack_a))
	{
		free_both_stack(stack_a, stack_b);
		unvalid_exit("Error");
	}
	else if (is_ordered(stack_a))
	{
		free_both_stack(stack_a, stack_b);
		exit(0);
	}
	else if (stack_a->size == 3)
		three_number(stack_a);
	else if (stack_a->size == 4)
		four_number(stack_a, stack_b);
	else if (stack_a->size == 5)
		five_number(stack_a, stack_b);
	else
		init_radix_sort(stack_a, stack_b);
	free_both_stack(stack_a, stack_b);
	return (0);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (ac > MAX_STACK + 1)
		unvalid_exit("Stack too big");
	if (!is_valid(ac, av) || ac == 1)
		unvalid_exit("Error");
	init_and_assign(&stack_a, &stack_b, ac, av);
	choose_algo(stack_a, stack_b);
	return (0);
}
