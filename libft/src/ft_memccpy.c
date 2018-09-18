/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 15:28:02 by rerasmus          #+#    #+#             */
/*   Updated: 2017/06/09 11:31:53 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*cdst;
	unsigned char	*csrc;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	while (n-- > 0)
	{
		if (*csrc == (unsigned char)c)
		{
			*cdst = *csrc;
			return (dst + 1);
		}
		*cdst = *csrc;
		cdst++;
		csrc++;
		dst++;
	}
	return (NULL);
}
