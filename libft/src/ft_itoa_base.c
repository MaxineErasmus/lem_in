/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 11:48:19 by rerasmus          #+#    #+#             */
/*   Updated: 2017/08/28 12:24:48 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa_base(int n, int b)
{
	int		len;
	char	*str;
	char	*base;

	base = "0123456789abcdef";
	if (!b)
		return (NULL);
	len = ft_intlen_base(n, b);
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
		str[len] = base[ft_abs(n) % b];
		n /= b;
		len--;
	}
	return (str);
}
