/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:08:14 by cdelaby           #+#    #+#             */
/*   Updated: 2021/08/01 22:12:15 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilib.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*sc;

	if (s == 0)
		return ;
	i = 0;
	sc = (unsigned char *)s;
	while (i < n)
	{
		sc[i] = 0;
		i++;
	}
}
