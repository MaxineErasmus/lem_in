/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_room_to_route.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:30:23 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:40:42 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		add_room_to_route(t_colony *colony, t_room *room)
{
	t_route *route_room;

	colony->num_of_route_rooms++;
	route_room = (t_route *)malloc(sizeof(t_route));
	route_room->room = room;
	if (!colony->route)
		colony->route_head = route_room;
	route_room->prev = colony->route;
	if (colony->route)
		colony->route->next = route_room;
	colony->route = route_room;
}
