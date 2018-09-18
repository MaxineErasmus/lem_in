/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 11:32:01 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/02 09:30:41 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	safe_join(char **str, char *buf)
{
	char	*tmp;

	tmp = ft_strjoin(*str, buf);
	ft_strdel(&*str);
	*str = tmp;
	tmp = NULL;
}

static int	read_to_string(int const fd, char **str)
{
	char		*buf;
	int			lines_read;

	if (!(buf = (char *)malloc(sizeof(*buf) * (BUFF_SIZE + 1))))
		return (-1);
	lines_read = read(fd, buf, BUFF_SIZE);
	if (lines_read > 0)
	{
		buf[lines_read] = '\0';
		safe_join(&*str, buf);
		ft_strdel(&buf);
	}
	return (lines_read);
}

static char	*read_from_cache(char **str, char **endl)
{
	char	*sub;
	char	*tmp;

	sub = ft_strsub(*str, 0, ft_strlen(*str) - ft_strlen(*endl));
	tmp = ft_strdup(*endl + 1);
	ft_strdel(&*str);
	*str = tmp;
	tmp = NULL;
	return (sub);
}

int			get_next_line(int const fd, char **line)
{
	static char	*str;
	char		*endl;
	int			lines_read;

	if ((!str && (str = (char *)malloc(sizeof(*str))) == NULL)
			|| !line || fd < 0 || BUFF_SIZE < 0)
		return (-1);
	endl = ft_strchr(str, '\n');
	while (endl == NULL)
	{
		lines_read = read_to_string(fd, &str);
		if (lines_read == 0)
		{
			if (ft_strlen(str) == 0)
				return (0);
			safe_join(&str, "\n");
		}
		if (lines_read < 0)
			return (-1);
		else
			endl = ft_strchr(str, '\n');
	}
	*line = read_from_cache(&str, &endl);
	return (1);
}
