/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_route.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:31:15 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:41:13 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

static void	colony_check(t_colony *c)
{
	if (ft_strcmp(c->start->name, c->end->name) == 0)
	{
		ft_putstr(KCYN);
		ft_putendl("Success! Start == End");
		ft_putstr(KNRM);
		exit(0);
	}
}

static void	check_visited(t_room *ptr, int *i)
{
	*i = ptr->num_of_tunnels;
	while ((ptr->to->room->visited == 1) && (*i)-- > 0)
		if (ptr->to->next)
			ptr->to = ptr->to->next;
}

static void	check_allvisited(t_room *ptr, t_colony *c, int i)
{
	if (i < 0)
	{
		if ((ft_strcmp(ptr->name, c->start->name) == 0))
			error();
		del_room_frm_route(c);
		find_route(c, c->route->room);
	}
}

void		find_route(t_colony *c, t_room *room)
{
	int				i;
	t_room			*ptr;

	ptr = room;
	colony_check(c);
	if (c->end_found)
		return ;
	else
	{
		if (ft_strcmp(ptr->name, c->end->name) == 0)
		{
			add_room_to_route(c, ptr);
			c->end_found = 1;
			return ;
		}
		if (!ptr->visited)
			add_room_to_route(c, ptr);
		ptr->visited = 1;
		check_visited(ptr, &i);
		check_allvisited(ptr, c, i);
		if (ptr->to->room->name && !ptr->to->room->visited
				&& ft_strcmp(ptr->to->room->name, c->start->name))
			find_route(c, ptr->to->room);
	}
}
