/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_comment.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:26:19 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:38:22 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		is_comment(char *str)
{
	return (ft_strncmp(str, "#", 1) == 0);
}
