/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 11:04:42 by rerasmus          #+#    #+#             */
/*   Updated: 2017/07/26 11:04:43 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc(char *buf, size_t n)
{
	char	*newbuf;

	if (!buf || !n)
		return (NULL);
	newbuf = ft_memalloc(n);
	if (!newbuf)
		return (NULL);
	ft_memcpy(newbuf, buf, sizeof(buf));
	if (!newbuf)
		return (NULL);
	ft_memdel((void **)buf);
	return (newbuf);
}
