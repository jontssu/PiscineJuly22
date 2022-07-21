/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:59:10 by jole              #+#    #+#             */
/*   Updated: 2022/07/09 18:32:27 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	**puzzle
	int	**stringtest;
	int	counter;
	int	i;

	i = -1;
	counter = 0;
	stringtest = &argv;

	if (argc != 10) // If not 9 lines
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (*argv[i++] != '\0')
		counter++;
			if (counter > 9)
				write(1, "Error\n", 6);
	argv++; // Not done, checking if there is more than 9 chars in string

	ft_sudoku

	return (0);
}
