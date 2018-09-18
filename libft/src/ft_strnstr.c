/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 14:01:37 by rerasmus          #+#    #+#             */
/*   Updated: 2017/06/09 11:34:48 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	n = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	while (*big && *little && len >= n)
	{
		if (*big == *little && ft_strncmp(big, little, n) == 0)
			return ((char *)big);
		len--;
		big++;
	}
	return (NULL);
}
