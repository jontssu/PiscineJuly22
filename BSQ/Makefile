# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emajuri <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 00:36:52 by emajuri           #+#    #+#              #
#    Updated: 2022/07/20 20:20:32 by jole             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = ft_check_map_chars.c ft_strcpy.c ft_convert_to_array.c ft_strncpy.c \
	  ft_delete_chars.c ft_valid_map.c ft_delete_endlines.c main.c \
	  ft_file_read.c ft_modify_map.c ft_atoi.c ft_print_out_array.c \
	  ft_biggest_square_check.c ft_putstr.c ft_calculate_columns.c \
	  ft_stdin_read.c

WWW = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	gcc -o $(NAME) $(WWW) $(SRC) -I bsq_header.h

clean:

fclean: clean
	rm -f $(NAME)

re:	fclean all
