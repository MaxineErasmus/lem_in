/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 10:58:38 by rerasmus          #+#    #+#             */
/*   Updated: 2017/07/26 10:58:39 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strarrcpy(char **arr, int j, char *str)
{
	int	i;

	i = 0;
	if (!arr || !j || !str)
		return (NULL);
	while (str[i])
	{
		arr[j][i] = str[i];
		i++;
	}
	arr[j][i] = '\0';
	return (arr);
}
