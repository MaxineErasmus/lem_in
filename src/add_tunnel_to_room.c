/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_tunnel_to_room.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:27:56 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:40:07 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		add_tunnel_to_room(t_room *room, t_room *dst)
{
	t_tunnel_to		*new_tun;

	new_tun = (t_tunnel_to *)malloc(sizeof(t_tunnel_to));
	new_tun->room = (t_room *)malloc(sizeof(t_room));
	room->num_of_tunnels++;
	new_tun->room = dst;
	new_tun->prev = dst->to;
	new_tun->next = room->to;
	room->to = new_tun;
}
