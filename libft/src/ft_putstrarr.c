/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrarr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 10:58:26 by rerasmus          #+#    #+#             */
/*   Updated: 2017/07/26 10:58:27 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrarr(char **arr, size_t len)
{
	size_t	i;

	i = 0;
	if (!arr || !len)
		return ;
	while (i < len)
	{
		ft_putstr(arr[i]);
		ft_putchar('\n');
		i++;
	}
}
