/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_room_frm_route.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:30:51 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:40:55 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		del_room_frm_route(t_colony *colony)
{
	colony->num_of_route_rooms--;
	colony->route = colony->route->prev;
	colony->route->next = NULL;
}
