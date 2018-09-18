/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_room.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:26:58 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:39:05 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		init_room(t_rooms *new_room)
{
	new_room->room->num_of_tunnels = 0;
	new_room->room->visited = 0;
	new_room->room->has_ant = 0;
	new_room->room->to = NULL;
}
