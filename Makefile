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

NAME		= push_swap

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
DEPFLAGS	= -MMD -MP

RM			= rm -f

################################################################################
# SOURCES
################################################################################

PARSING = \
	parsing/ft_atol.c \
	parsing/ft_build_stack.c \
	parsing/ft_has_duplicate.c \
	parsing/ft_is_number.c \
	parsing/ft_parse_flags.c \
	parsing/ft_parse_input.c \
	parsing/ft_validate_value.c

STACK = \
	stack/ft_add_back.c \
	stack/ft_create_node.c \
	stack/ft_free_stack.c \
	stack/ft_last_node.c \
	stack/ft_stack_size.c

SORT = \
	sort/ft_assign_index.c \
	sort/ft_find_max.c \
	sort/ft_find_max_index.c \
	sort/ft_find_min_index.c \
	sort/ft_find_position.c \
	sort/ft_is_sorted.c \
	sort/ft_rotate_to_top.c

ADAPTIVE = \
	strategy/adaptive/ft_choose_strategy.c

SIMPLE = \
	strategy/simple/ft_simple.c \
	strategy/simple/ft_sort_two.c \
	strategy/simple/ft_sort_three.c \
	strategy/simple/ft_sort_five.c

MEDIUM = \
	strategy/medium/ft_medium.c \
	strategy/medium/ft_chunk_back.c \
	strategy/medium/ft_chunk_position.c \
	strategy/medium/ft_chunk_rotate.c \
	strategy/medium/ft_chunk_size.c \
	strategy/medium/ft_chunks_push.c

COMPLEX = \
	strategy/complex/ft_complex.c

STRATEGY = \
	strategy/ft_compute_disorder.c \
	$(ADAPTIVE) \
	$(SIMPLE) \
	$(MEDIUM) \
	$(COMPLEX)

OPERATIONS = \
	operations/ft_sa.c \
	operations/ft_sb.c \
	operations/ft_ss.c \
	operations/ft_pa.c \
	operations/ft_pb.c \
	operations/ft_ra.c \
	operations/ft_rb.c \
	operations/ft_rr.c \
	operations/ft_rra.c \
	operations/ft_rrb.c \
	operations/ft_rrr.c

UTILS = \
	utils/ft_counter_init.c \
	utils/ft_free_split.c \
	utils/ft_split.c \
	utils/ft_strcmp.c \
	utils/ft_strdup.c \
	utils/ft_strlen.c \
	utils/ft_strlcpy.c \
	utils/ft_substr.c

SRCS = \
	push_swap.c \
	$(PARSING) \
	$(STACK) \
	$(SORT) \
	$(STRATEGY) \
	$(OPERATIONS) \
	$(UTILS)

################################################################################
# OBJECTS
################################################################################

OBJS = $(SRCS:.c=.o)
DEPS = $(OBJS:.o=.d)

################################################################################
# RULES
################################################################################

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) $(DEPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re