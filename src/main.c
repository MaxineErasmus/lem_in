/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 11:24:35 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:24:38 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "lem_in.h"

int		main(void)
{
	t_colony	*c;

	c = (t_colony*)malloc(sizeof(t_colony));
	init_colony(c);
	ft_putstr(KGRN);
	get_map(c);
	ft_putstr(KNRM);
	add_tunnels_to_rooms(c);
	ft_putchar('\n');
	find_route(c, c->start);
	march_ants(c);
	return (0);
}
