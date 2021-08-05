/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 21:58:04 by chris             #+#    #+#             */
/*   Updated: 2021/08/02 13:22:54 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

static int	char_is_alpha(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

static int	char_to_int(const char *str, int i, int neg)
{
	long	final;

	final = 0;
	while (str[i] && char_is_alpha(str[i]))
	{
		if (neg == -1 && final > (unsigned int)2147483648)
			return (-1);
		else if (final > (unsigned int)2147483647)
			return (-1);
		final = final * 10 + (str[i] - 48);
		i++;
	}
	if (neg == -1 && final > 2147483648)
		return (-1);
	else if (neg == 1 && final > 2147483647)
		return (-1);
	return (final);
}

int	ft_atoi(const char *str, int *flag)
{
	int			i;
	int			neg;
	long		s;

	i = 0;
	neg = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	s = char_to_int(str, i, neg);
	if (s == -1)
		*flag = 1;
	s = s * neg;
	return (s);
}
