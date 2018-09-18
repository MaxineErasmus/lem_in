/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 09:52:38 by rerasmus          #+#    #+#             */
/*   Updated: 2017/06/09 09:53:01 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*trim;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s) - 1;
	while (ft_isspace(s[i]))
		i++;
	if (i >= j)
		return (ft_strnew(0));
	while (ft_isspace(s[j]))
		j--;
	len = j - i + 1;
	trim = ft_strsub(s, i, len);
	return (trim);
}
