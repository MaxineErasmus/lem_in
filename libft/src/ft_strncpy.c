/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 15:25:18 by rerasmus          #+#    #+#             */
/*   Updated: 2017/06/09 11:33:50 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (src[i] == '\0' && i < len)
		{
			while (i < len)
			{
				dst[i] = '\0';
				i++;
			}
		}
		else
			dst[i] = src[i];
		i++;
	}
	return (dst);
}
