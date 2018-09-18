/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_tunnels_to_rooms.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:29:14 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:40:14 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

static void	colony_check(t_colony *c)
{
	if (c->num_of_tunnels < 1)
		error();
}

void		add_tunnels_to_rooms(t_colony *c)
{
	int			num_of_tunnels;
	t_tunnels	*ptr;
	t_room		*room1;
	t_room		*room2;

	colony_check(c);
	num_of_tunnels = c->num_of_tunnels;
	ptr = c->tunnels;
	while (num_of_tunnels-- > 0)
	{
		if ((room1 = find_room(c, ptr->room1)) &&
				(room2 = find_room(c, ptr->room2)))
		{
			add_tunnel_to_room(room1, room2);
			add_tunnel_to_room(room2, room1);
			ptr = ptr->next;
		}
		else
			error();
	}
}
