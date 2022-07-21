# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jole <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 19:18:07 by jole              #+#    #+#              #
#    Updated: 2022/07/14 23:40:22 by jole             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ft_cat.c ft_display_file.c ft_putstr.c ft_putchar.c main.c

WWW = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(WWW) -o $(NAME) $(SRC)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
