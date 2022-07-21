# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jole <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 16:11:54 by jole              #+#    #+#              #
#    Updated: 2022/07/14 19:08:03 by jole             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c ft_putchar.c ft_putstr.c

WWW = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(WWW) -o $(NAME) $(SRC)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
