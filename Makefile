# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dichacon <dichacon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/14 19:35:12 by andrcarr          #+#    #+#              #
#    Updated: 2026/07/25 19:48:05 by dichacon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g3

SRC = \
	borrar/main.c \
	parsing/ft_atol.c \
	parsing/ft_has_duplicate.c \
	parsing/ft_is_number.c \
	parsing/ft_parse_flags.c \
	parsing/ft_parse_input.c \
	parsing/ft_validate_value.c \
	stack/ft_add_back.c \
	stack/ft_add_front.c \
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
	strategy/ft_simple.c \
	utils/ft_split.c \
	utils/ft_strdup.c \
	utils/ft_strcmp.c \
	utils/ft_strlen.c \
	utils/ft_strlcpy.c \
	utils/ft_substr.c \
	utils/ft_memset.c \
	utils/operations_utils.c \
	operations/swap.c \
	operations/push.c \
	operations/rotate.c \
	operations/reverse_rotate.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

#--- COMPILACION EJECUTABLE CON MAIN, PARAMETROS PERO SIN FLAGS
test: re
	./$(NAME) -42 18 -7 93 -85 5 61 -12 34 -99 27 -3 50 -68 11
	@echo "\n✨ ¡Test compilado!"

# --- REGLA PARA DEBUGAR CON GDB ---
debug: re
	gdb -ex "source borrar/.gdbinit" --args ./$(NAME) 5 4 6 3 2 1
	@echo "\n🐛 Compilado en modo DEBUG con GDB."

.PHONY: all clean fclean re test debug