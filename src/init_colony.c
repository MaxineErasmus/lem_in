/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_colony.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:27:14 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:38:59 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	init_colony(t_colony *c)
{
	c->num_of_ants = 0;
	c->num_of_rooms = 0;
	c->num_of_tunnels = 0;
	c->num_of_route_rooms = 0;
	c->start_flag = 0;
	c->end_flag = 0;
	c->end_found = 0;
	c->start = NULL;
	c->end = NULL;
	c->rooms = NULL;
	c->tunnels = NULL;
	c->route_head = NULL;
	c->route = NULL;
}
