# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andrcarr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/14 19:35:12 by andrcarr          #+#    #+#              #
#    Updated: 2026/07/14 19:35:25 by andrcarr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = \
	borrar/main.c \
	parsing/*.c \
	stack/*.c \
	sort/*.c \
	strategy/*.c

all:
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all
