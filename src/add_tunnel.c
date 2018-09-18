/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_tunnel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:27:35 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:39:52 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

static void	colony_check(t_colony *c, char *r1, char *r2)
{
	if (!c->start || !c->end || !find_room(c, r1)
		|| !find_room(c, r2))
		error();
}

void		add_tunnel(t_colony *c, char *line)
{
	char			**data;
	t_tunnels		*new_tun;

	c->num_of_tunnels++;
	data = ft_strsplit(line, '-');
	colony_check(c, data[0], data[1]);
	new_tun = (t_tunnels *)malloc(sizeof(t_tunnels));
	new_tun->room1 = ft_strdup(data[0]);
	new_tun->room2 = ft_strdup(data[1]);
	new_tun->next = c->tunnels;
	c->tunnels = new_tun;
}
