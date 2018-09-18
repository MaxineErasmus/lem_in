/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:00:54 by rerasmus          #+#    #+#             */
/*   Updated: 2017/08/28 12:11:54 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_intlen(n);
	if (n < 0)
		len++;
	str = ft_strnew(len);
	len--;
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	while (len >= 0 && str[len] != '-')
	{
		str[len] = (ft_abs(n) % 10) + '0';
		n /= 10;
		len--;
	}
	return (str);
}
