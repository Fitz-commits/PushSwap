/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 22:23:54 by chris             #+#    #+#             */
/*   Updated: 2021/08/02 13:25:29 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# define MAX_STACK 100000
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "./mini_lib/minilib.h"

typedef struct s_stack {
	int	*stack;
	int	size;
}	t_stack;

int						init_both_stack(t_stack **stack_a,
							t_stack **stack_b, int size);
t_stack					*init_stack(int size);
void					sa(t_stack *stack_a, int print);
void					sb(t_stack *stack_b, int print);
void					ss(t_stack *stack_a, t_stack *stack_b);
void					ra(t_stack *stack_a, int print);
void					rb(t_stack *stack_b, int print);
void					rra(t_stack *stack_a, int print);
void					pa(t_stack *stack_a, t_stack *stack_b);
void					pb(t_stack *stack_a, t_stack *stack_b);
void					two_number(t_stack *stack_a);
void					three_number(t_stack *stack_a);
void					four_number(t_stack *stack_a, t_stack *stack_b);
void					five_number(t_stack *stack_a, t_stack *stack_b);
int						find_min(t_stack *stack);
int						find_max(t_stack *stack);
t_stack					*copy_stack(t_stack *stack);
void					bubble_sort(t_stack *stack);
void					map(t_stack *stack_a, t_stack *copy);
void					radix_sort(t_stack *stack_a, t_stack *stack_b);
int						up_or_down(t_stack *stack_a, int number);
int						is_ordered(t_stack *stack);
int						is_valid(int ac, char **av);
void					free_both_stack(t_stack *stack_a, t_stack *stack_b);
int						init_and_assign(t_stack **stack_a, t_stack **stack_b,
							 int ac, char **av);
int						check_duplicate(t_stack *stack);
void					init_radix_sort(t_stack *stack_a, t_stack *stack_b);
void					unvalid_exit(char *desc);

#endif