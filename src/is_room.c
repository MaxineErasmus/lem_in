/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_room.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:26:27 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:38:29 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

static int	is_num(char *str)
{
	while (*str)
	{
		if (!ft_isdigit(*str++))
			return (0);
	}
	return (1);
}

int			is_room(char **arr)
{
	if (ft_strarrlen(arr) != 3 || arr[0][0] == 'L'
		|| !is_num(arr[1]) || !is_num(arr[2]))
		return (0);
	return (1);
}
