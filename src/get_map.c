/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:24:53 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:38:47 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int			get_map(t_colony *c)
{
	int		ret;
	char	*line;
	char	**data;

	while ((ret = get_next_line(0, &line)))
	{
		ft_putendl(line);
		data = ft_strsplit(line, ' ');
		if (is_ants(data) && c->num_of_ants == 0)
			c->num_of_ants = ft_atoi(line);
		else if (is_room(data) && c->num_of_ants)
			add_room(c, data);
		else if (is_tunnel(c, line))
			add_tunnel(c, line);
		else if (is_start(line))
			c->start_flag = 1;
		else if (is_end(line))
			c->end_flag = 1;
		else if (is_comment(line))
			continue;
		else
			error();
	}
	return (0);
}
