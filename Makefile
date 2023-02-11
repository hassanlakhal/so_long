# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/31 03:01:17 by hlakhal-          #+#    #+#              #
#    Updated: 2023/02/11 21:37:59 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLOUR_GREEN=\033[0;32m

NAME = so_long

SRCS = grafique.c  map_tck.c  pate_e.c main.c dispaly_image.c   player_pos.c\
	move_up.c parte.c teck.c get_next_line/get_next_line.c  get_next_line/get_next_line_utils.c\
	read_map.c

CC		= cc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRCS:.c=.o)

all:so_long

so_long:$(OBJ)

		@make -sC libft/
		@make -sC ft_printf/
		@$(CC) $(CFLAGS) $(OBJ) -lmlx -framework OpenGL -framework AppKit libft/libft.a ft_printf/libftprintf.a -o so_long
		@echo "$(COLOUR_GREEN)done ✔"

clean:
		@make -sC libft/ clean
		@make -sC ft_printf/ clean
		@rm -f  $(OBJ)

fclean:	clean
		@echo "$(COLOUR_GREEN)clean all"
		@make -sC libft/ fclean
		@make -sC ft_printf/ fclean
		@rm -f $(NAME)

re:		fclean all
