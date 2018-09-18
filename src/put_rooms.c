/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_rooms.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 11:08:54 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:39:30 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		put_rooms(t_colony *colony)
{
	int		num_of_rooms;
	t_rooms *ptr;

	ptr = colony->rooms;
	num_of_rooms = colony->num_of_rooms;
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
