/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 09:59:50 by rerasmus          #+#    #+#             */
/*   Updated: 2017/08/01 09:39:39 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_strtoarr(char **arr, char const *s, int wlen, char c)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	while (j < wlen)
	{
		len = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			len++;
		}
		arr[j] = ft_strsub(s, i - len, len);
		while (s[i] && s[i] == c)
			i++;
		j++;
	}
	return (arr);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		wlen;

	if (!s || !c)
		return (NULL);
	wlen = ft_wordcount(s, c);
	arr = ft_strarrnew(wlen);
	if (!arr)
		return (NULL);
	arr = ft_strtoarr(arr, s, wlen, c);
	return (arr);
}
