/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_col_tunnels.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:29:59 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:40:23 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		put_col_tunnels(t_colony *colony)
{
	int			num_of_tunnels;
	t_tunnels	*ptr;

	ptr = colony->tunnels;
	num_of_tunnels = colony->num_of_tunnels;
	while (num_of_tunnels-- > 0)
	{
		ft_putstr(ptr->room1);
		ft_putstr("-");
		ft_putstr(ptr->room2);
		ft_putchar('\n');
		ptr = ptr->next;
	}
}
