# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 20:29:39 by hlakhal-          #+#    #+#              #
#    Updated: 2022/11/10 17:16:55 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a


SRCS = ft_printf.c ft_putnbr.c ft_putstr.c ft_putchar_.c \
	ft_put_hex.c ft_putnbr_u.c ft_uitao.c ft_pointer_void.c\
	ft_memset.c ft_itoa.c  ft_put_hex_u.c

OBJS = ft_printf.o ft_putnbr.o ft_putstr.o ft_putchar_.o \
	ft_put_hex.o ft_putnbr_u.o ft_uitao.o ft_pointer_void.o \
	ft_memset.o ft_itoa.o ft_put_hex_u.o

CC = cc

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
		ar -r -c  ${NAME} ${OBJS}

.o:
	$(CC) $(CFLAGS) -c -o $(OBJS) $(SRCS)

all:${NAME}

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all

