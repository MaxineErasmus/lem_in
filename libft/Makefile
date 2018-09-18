# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/30 10:36:40 by rerasmus          #+#    #+#              #
#    Updated: 2017/09/11 15:18:47 by rerasmus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INC_PATH = ./includes/

all: $(NAME)

# **************************************************************************** #
#                             GENERAL FUNCTIONS                                #
# **************************************************************************** #

SRC_PATH =	./src/

SRC_CONV =	ft_atoi.c ft_itoa.c ft_itoa_base.c

SRC_MATH =	ft_abs.c ft_intlen.c ft_intlen_base.c

SRC_BOOL =	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_isspace.c

SRC_MEM =	ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
		ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c \
		ft_realloc.c

SRC_PUT =	ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c \
		ft_putnbr.c ft_putnbr_fd.c ft_putstrarr.c ft_putstr.c \
		ft_putstr_fd.c
		
SRC_STR =	ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c \
		ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c \
		ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
		ft_strlen.c ft_strlenc.c ft_strnlen.c ft_strmap.c \
		ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
		ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c \
		ft_strrev.c ft_strsplit.c ft_strstr.c ft_strsub.c \
		ft_strtrim.c

SRC_SARR =	ft_strarrcpy.c ft_strarrnew.c

SRC_LST =	ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c \
		ft_lstiter.c ft_lstmap.c

SRC_FILE =	get_next_line.c

SRC_MISC =	ft_wordcount.c ft_bzero.c ft_tolower.c ft_toupper.c

SRC_NAME =	$(SRC_CONV) $(SRC_MATH) $(SRC_BOOL) $(SRC_MEM) $(SRC_PUT) \
		$(SRC_STR) $(SRC_SARR) $(SRC_LST) $(SRC_FILE) $(SRC_MISC)

# **************************************************************************** #
#                                  GENERAL                                     #
# **************************************************************************** #

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))

OBJ = $(patsubst %.c,%.o,$(SRC_NAME))

INC = -I $(INC_PATH)
CC = gcc -Wall -Werror -Wextra

$(NAME):
	@ $(CC) -c $(SRC) $(INC)
	@ ar rc $(NAME) $(OBJ)
	@ ranlib $(NAME)
	@ make clean

clean:
	@ /bin/rm -f $(OBJ)

fclean: clean
	@ /bin/rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                   NORM                                       #
# **************************************************************************** #

NORM = norminette

n0:
	@ $(NORM) $(addprefix $(SRC_PATH),$(SRC_MISC))
n1: 
	@ $(NORM) $(addprefix $(SRC_PATH),$(SRC_CONV))
n2: 
	@ $(NORM) $(addprefix $(SRC_PATH),$(SRC_MATH))
n3:
	@ $(NORM) $(addprefix $(SRC_PATH),$(SRC_BOOL))
n4:
	@ $(NORM) $(addprefix $(SRC_PATH),$(SRC_MEM))
n5:
	@ $(NORM) $(addprefix $(SRC_PATH),$(SRC_PUT))
n6:
	@ $(NORM) $(addprefix $(SRC_PATH),$(SRC_STR))
n7:
	@ $(NORM) $(addprefix $(SRC_PATH),$(SRC_SARR))
n8:
	@ $(NORM) $(addprefix $(SRC_PATH),$(SRC_LST))
n9:
	@ $(NORM) $(addprefix $(SRC_PATH),$(SRC_FILE))

n: n0 n1 n2 n3 n4 n5 n6 n7 n8 n9
