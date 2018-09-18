/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_room_tunnels.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:29:41 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:40:32 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		put_room_tunnels(t_colony *colony, char *name)
{
	int				num_of_tunnels;
	t_room			*room;
	t_tunnel_to		*ptr;

	room = find_room(colony, name);
	ptr = room->to;
	num_of_tunnels = room->num_of_tunnels;
	while (num_of_tunnels-- > 0)
	{
		ft_putendl(ptr->room->name);
		ptr = ptr->next;
	}
}
