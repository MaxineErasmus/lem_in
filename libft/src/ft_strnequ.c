/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 10:49:30 by rerasmus          #+#    #+#             */
/*   Updated: 2017/08/07 11:25:50 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	x;

	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (1);
	x = ft_strncmp(s1, s2, n);
	if (x == 0)
		return (1);
	return (0);
}
