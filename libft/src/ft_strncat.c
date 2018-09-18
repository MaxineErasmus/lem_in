/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 15:09:50 by rerasmus          #+#    #+#             */
/*   Updated: 2017/06/09 11:34:02 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s1);
	while (s2[i] && n > 0)
	{
		s1[len + i] = s2[i];
		i++;
		n--;
	}
	s1[len + i] = '\0';
	return (s1);
}
