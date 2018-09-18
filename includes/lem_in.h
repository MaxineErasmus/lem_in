/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:32:21 by rerasmus          #+#    #+#             */
/*   Updated: 2017/12/07 11:36:20 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include "libft.h"

typedef struct			s_room
{
	int					num_of_tunnels;
	int					visited;
	int					has_ant;
	char				*name;
	int					x;
	int					y;
	struct s_tunnel_to	*to;
}						t_room;

typedef struct			s_rooms
{
	t_room				*room;
	struct s_rooms		*next;
}						t_rooms;

typedef struct			s_tunnel_to
{
	t_room				*room;
	struct s_tunnel_to	*prev;
	struct s_tunnel_to	*next;
}						t_tunnel_to;

typedef struct			s_tunnels
{
	char				*room1;
	char				*room2;
	struct s_tunnels	*next;
}						t_tunnels;

typedef struct			s_route
{
	t_room				*room;
	struct s_route		*prev;
	struct s_route		*next;
}						t_route;

typedef struct			s_colony
{
	long int			num_of_ants;
	int					num_of_rooms;
	int					num_of_tunnels;
	int					num_of_route_rooms;
	int					start_flag;
	int					end_flag;
	int					end_found;
	t_room				*start;
	t_room				*end;
	t_rooms				*rooms;
	t_tunnels			*tunnels;
	t_route				*route_head;
	t_route				*route;
}						t_colony;

int						ft_strarrlen(char **arr);
void					ft_strarrdel(char ***arr);
void					error(void);
int						get_map(t_colony *colony);
int						is_ants(char **data);
int						is_start(char *str);
int						is_end(char *str);
int						is_comment(char *str);
int						is_room(char **arr);
int						is_tunnel(t_colony *c, char *str);
void					init_colony(t_colony *colony);
void					init_room(t_rooms *new_room);
void					add_room(t_colony *colony, char **data);
t_room					*find_room(t_colony *colony, char *name);
void					add_tunnel(t_colony *colony, char *line);
void					add_tunnel_to_room(t_room *room, t_room *dst);
void					add_tunnels_to_rooms(t_colony *colony);
void					add_room_to_route(t_colony *colony, t_room *room);
void					del_room_frm_route(t_colony *colony);
void					find_route(t_colony *colony, t_room *room);
void					put_rooms(t_colony *colony);
void					put_room_tunnels(t_colony *colony, char *name);
void					put_col_tunnels(t_colony *colony);
void					put_route(t_colony *colony);
void					march_ants(t_colony *colony);

#endif
