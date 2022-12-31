# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/31 03:01:17 by hlakhal-          #+#    #+#              #
#    Updated: 2022/12/31 03:04:10 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRCS =

OBJS =

CC		= cc

CFLAGS = -Wall -Wextra -Werror

.o :
		${CC} ${CFLAGS}   -c -o   ${OBJS} ${SRCS}

$(NAME): $(OBJS)
		ar -r -c  ${NAME} ${OBJS}

all:${NAME}

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all
