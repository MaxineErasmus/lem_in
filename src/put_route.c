/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_route.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:31:05 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:41:06 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		put_route(t_colony *colony)
{
	int		num_of_rooms;
	t_route *ptr;

	ptr = colony->route_head;
	num_of_rooms = colony->num_of_route_rooms;
	while (num_of_rooms-- > 0)
	{
		ft_putstr("(");
		ft_putstr(ptr->room->name);
		ft_putstr(") x: ");
		ft_putnbr(ptr->room->x);
		ft_putstr(" y: ");
		ft_putnbr(ptr->room->x);
		ft_putchar('\n');
		ptr = ptr->next;
	}
}
