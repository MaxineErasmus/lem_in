/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 15:28:03 by rerasmus          #+#    #+#             */
/*   Updated: 2017/07/26 11:00:46 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			len;
	char		*ptr;

	ptr = (char *)s;
	len = ft_strlen(s);
	if ((char)c == '\0')
		return (ptr + len);
	len--;
	while (ptr[len] && len >= 0)
	{
		if (ptr[len] == (char)c)
			return (ptr + len);
		len--;
	}
	return (NULL);
}
