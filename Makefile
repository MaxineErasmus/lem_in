# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/07 11:42:31 by rerasmus          #+#    #+#              #
#    Updated: 2017/12/11 10:10:15 by rerasmus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: bmaps gmaps maps

NAME = lem-in
LIB = libft.a
LIB_PATH = libft/
INC_PATH = includes/

all: $(NAME)

SRC_PATH = src/

SRC_NAME =	main.c
SRC_NAME +=	ft_strarrlen.c ft_strarrdel.c error.c
SRC_NAME +=	get_map.c
SRC_NAME +=	is_ants.c is_start.c is_end.c is_comment.c is_room.c is_tunnel.c
SRC_NAME += init_colony.c
SRC_NAME += init_room.c add_room.c find_room.c
SRC_NAME += add_tunnel.c add_tunnel_to_room.c add_tunnels_to_rooms.c
SRC_NAME +=	add_room_to_route.c del_room_frm_route.c find_route.c
SRC_NAME += put_rooms.c put_room_tunnels.c put_col_tunnels.c put_route.c
SRC_NAME += march_ants.c

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
CC = gcc -Wall -Werror -Wextra
INC = -I $(LIB_PATH)$(INC_PATH) -I $(INC_PATH)

$(NAME):
	@ make -C $(LIB_PATH) re
	@ $(CC) $(SRC) $(LIB_PATH)$(LIB) $(INC) -o $(NAME)

fclean:
	@ /bin/rm -f $(NAME)

re: fclean all

#TESTING

gmaps:
	@ echo "\n---------------GOOD MAPS---------------"
	./lem-in < maps/map0
	@ echo ""
	./lem-in < maps/map1
	@ echo ""
	./lem-in < maps/map2
	@ echo ""
	./lem-in < maps/map3
	@ echo ""
	./lem-in < maps/map4
	@ echo ""
	./lem-in < maps/map5
	@ echo ""
	./lem-in < maps/map6
	@ echo ""
	./lem-in < maps/map7
	@ echo ""
	./lem-in < maps/map8
	@ echo ""
	./lem-in < maps/map9
	@ echo ""
	./lem-in < maps/map10
	@ echo ""
	./lem-in < maps/map11

bmaps:
	@ echo "\n---------------BAD MAPS---------------"
		./lem-in < badmaps/bmap1
	@ echo ""
		./lem-in < badmaps/bmap2
	@ echo ""
	./lem-in < badmaps/bmap3
	@ echo ""
	./lem-in < badmaps/bmap4
	@ echo ""
	./lem-in < badmaps/bmap5
	@ echo ""
	./lem-in < badmaps/bmap6
	@ echo ""
		./lem-in < badmaps/bmap7
	@ echo ""
	./lem-in < badmaps/bmap8
	@ echo ""
		./lem-in < badmaps/bmap9
	@ echo ""
		./lem-in < badmaps/bmap10
	@ echo ""
	./lem-in < badmaps/bmap11
	@ echo ""
	./lem-in < badmaps/bmap12
	@ echo ""
	./lem-in < badmaps/bmap13
	@ echo ""
	./lem-in < badmaps/bmap14
	@ echo ""
	./lem-in < badmaps/bmap15
	@ echo ""
	./lem-in < badmaps/bmap16
	@ echo ""
	./lem-in < badmaps/bmap17
	@ echo ""
	./lem-in < badmaps/bmap18

maps: gmaps bmaps
