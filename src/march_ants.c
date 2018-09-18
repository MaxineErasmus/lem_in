/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   march_ants.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:31:31 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:41:25 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

static void		print_ant(t_route *route)
{
	if (route->next && route->next->room->has_ant)
		ft_putchar(' ');
	ft_putstr("L");
	ft_putnbr(route->room->has_ant);
	ft_putstr("-");
	ft_putstr(route->room->name);
}

static void		when_at_room_type(int *ant, t_route *route, t_colony *c)
{
	if (ft_strcmp(route->room->name, c->start->name) == 0)
	{
		if (*ant < c->num_of_ants)
		{
			(*ant)++;
			route->next->room->has_ant = *ant;
			print_ant(route->next);
		}
	}
	else if (ft_strcmp(route->room->name, c->end->name) == 0
		|| !route->room->has_ant)
	{
		if (route->prev->room->has_ant)
		{
			route->room->has_ant = route->prev->room->has_ant;
			route->prev->room->has_ant = 0;
			print_ant(route);
		}
	}
}

void			march_ants(t_colony *c)
{
	int			ant;
	int			len;
	t_route		*route;

	ant = 0;
	while (c->end->has_ant < c->num_of_ants)
	{
		len = c->num_of_route_rooms;
		route = c->route;
		while (len-- > 0)
		{
			when_at_room_type(&ant, route, c);
			route = route->prev;
		}
		ft_putchar('\n');
	}
}
