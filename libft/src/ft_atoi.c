/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 15:15:48 by rerasmus          #+#    #+#             */
/*   Updated: 2017/08/14 13:09:03 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				num;
	int				neg;

	num = 0;
	neg = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		num += *str - '0';
		if (ft_isdigit(*(str + 1)))
			num *= 10;
		str++;
	}
	return (num * neg);
}
