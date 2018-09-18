/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_room.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:27:27 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:39:17 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

static void	colony_check(t_colony *c, char *room)
{
	if (find_room(c, room))
		error();
}

static void	fill_room(t_colony *c, char **data)
{
	t_rooms *new_room;

	colony_check(c, data[0]);
	c->num_of_rooms++;
	new_room = (t_rooms *)malloc(sizeof(t_rooms));
	new_room->room = (t_room *)malloc(sizeof(t_room));
	init_room(new_room);
	new_room->room->name = ft_strdup(data[0]);
	new_room->room->x = ft_atoi(data[1]);
	new_room->room->y = ft_atoi(data[2]);
	new_room->next = c->rooms;
	c->rooms = new_room;
}

void		add_room(t_colony *c, char **data)
{
	fill_room(c, data);
	if (c->start_flag)
	{
		if (c->start)
			error();
		c->start_flag = 0;
		c->start = c->rooms->room;
	}
	if (c->end_flag)
	{
		if (c->end)
			error();
		c->end_flag = 0;
		c->end = c->rooms->room;
	}
}
