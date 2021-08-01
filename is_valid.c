/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 21:43:48 by chris             #+#    #+#             */
/*   Updated: 2021/08/01 21:43:49 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	is_valid(int ac, char **av)
{
	int		i;
	int		j;
	int		k;

	i = 1;
	while (i < ac)
	{
		k = 0;
		j = ft_strlen(av[i]);
		while (k < j)
		{
			if (!ft_ispace(av[i][k]) && !ft_isnum(av[i][k])
				&& !(av[i][k] == '+') && !(av[i][k] == '-'))
				return (0);
			k++;
		}
		i++;
	}
	return (1);
}

int	check_duplicate(t_stack *stack)
{
	int		i;
	int		j;

	i = 0;
	while (i < stack->size)
	{
		j = 0;
		while (j < stack->size)
		{
			if (stack->stack[j] == stack->stack[i] && i != j)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	unvalid_exit(char *desc)
{
	ft_putendl_fd(desc, 1);
	exit(1);
}
