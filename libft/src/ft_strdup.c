/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 14:17:20 by rerasmus          #+#    #+#             */
/*   Updated: 2017/06/09 11:33:35 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = ft_strnew(ft_strlen(s1));
	if (!s2)
		return (NULL);
	ft_strcpy(s2, s1);
	return (s2);
	ft_strdel(&s2);
}
