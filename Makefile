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
	parsing/ft_atol.c \
	parsing/ft_has_duplicate.c \
	parsing/ft_is_number.c \
	parsing/ft_parse_flags.c \
	parsing/ft_parse_input.c \
	parsing/ft_validate_value.c \
	stack/ft_add_back.c \
	parsing/ft_build_stack.c \
	stack/ft_create_node.c \
	stack/ft_free_stack.c \
	stack/ft_last_node.c \
	stack/ft_stack_size.c \
	sort/ft_assign_index.c \
	sort/ft_find_max.c \
	sort/ft_find_min.c \
	sort/ft_is_sorted.c \
	strategy/ft_compute_disorder.c \
	utils/ft_split.c \
	utils/ft_strdup.c \
	utils/ft_strcmp.c \
	utils/ft_strlen.c \
	utils/ft_strlcpy.c \
	utils/ft_substr.c

OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all