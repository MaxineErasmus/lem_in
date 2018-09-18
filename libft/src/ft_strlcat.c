/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 15:13:25 by rerasmus          #+#    #+#             */
/*   Updated: 2017/08/07 12:27:22 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dstlen)
		return (size + srclen);
	if (srclen < size - dstlen)
	{
		ft_memcpy(dst + dstlen, src, srclen);
		dst += dstlen + srclen;
	}
	else
	{
		ft_memcpy(dst + dstlen, src, size - dstlen - 1);
		dst += size - 1;
	}
	*dst = '\0';
	return (srclen + dstlen);
}
