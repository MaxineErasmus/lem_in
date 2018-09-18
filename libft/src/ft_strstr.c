/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 09:51:43 by rerasmus          #+#    #+#             */
/*   Updated: 2017/06/09 11:34:40 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		j = 0;
		while (big[i] && little[j] && big[i] == little[j])
		{
			i++;
			j++;
			if (little[j] == '\0')
			{
				big += i - j;
				return ((char *)big);
			}
		}
		i -= j;
		i++;
	}
	return (NULL);
}
