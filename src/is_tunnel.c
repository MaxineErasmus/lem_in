/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tunnel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:26:38 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:38:38 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int			is_tunnel(t_colony *c, char *str)
{
	char	**room;

	if (ft_strchr(str, '-'))
	{
		room = ft_strsplit(str, '-');
		if (find_room(c, room[0]) && find_room(c, room[1]))
			return (1);
	}
	return (0);
}
