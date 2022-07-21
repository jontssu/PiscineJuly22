# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jole <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 16:02:52 by jole              #+#    #+#              #
#    Updated: 2022/07/11 16:16:15 by jole             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OF = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

WWW = -Wall -Werror -Wextra

INC = includes/

all: $(NAME)

$(NAME):
	gcc $(WWW) -I $(INC) -c $(SRC)
	ar rc $(NAME) $(OF)

clean:
	rm -f $(OF)

fclean: clean
	rm -f $(NAME)

re: clean all
