/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 14:03:48 by rerasmus          #+#    #+#             */
/*   Updated: 2017/08/07 14:43:53 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr;
	t_list	*next_link;

	ptr = *alst;
	while (ptr)
	{
		next_link = ptr->next;
		del(ptr->content, ptr->content_size);
		free(ptr);
		ptr = next_link;
	}
	*alst = NULL;
}
