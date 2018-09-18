/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 15:07:50 by rerasmus          #+#    #+#             */
/*   Updated: 2017/08/07 13:00:45 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	if (len == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && len > 1)
	{
		s1++;
		s2++;
		len--;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
