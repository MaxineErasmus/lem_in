/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_room.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:25:37 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:39:40 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_room		*find_room(t_colony *colony, char *name)
{
	int		num_of_rooms;
	t_rooms *ptr;

	ptr = colony->rooms;
	num_of_rooms = colony->num_of_rooms;
	while (num_of_rooms-- > 0)
	{
		if (ft_strcmp(name, ptr->room->name) == 0)
			return (ptr->room);
		ptr = ptr->next;
	}
	return (NULL);
}
