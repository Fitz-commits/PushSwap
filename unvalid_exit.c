/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unvalid_exit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 12:28:51 by chris             #+#    #+#             */
/*   Updated: 2021/08/02 12:58:58 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	unvalid_exit(char *desc)
{
	ft_putendl_fd(desc, 1);
	exit(1);
}
