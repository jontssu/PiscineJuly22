/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   em_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:34:53 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/20 21:03:00 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int	main(int argc, char **argv)
{
	int		x;

	x = 1;
	while (argc > x || (argc == 1 && x == 1))
	{
		if (x != 1)
			write(1, "\n", 1);
		ft_expand_main(argc, argv[x], 0);
		x++;
	}
	return (0);
}

void	ft_expand_main(int argc, char *argv, int col)
{
	char	*input;
	char	**chars;
	int		x;

	if (argc == 1)
		input = ft_stdin_read(1, 0, &x);
	else
		input = ft_file_read(argv, &x);
	if (input == 0)
		write(2, "Couldn't open file\n", 19);
	else if ((input[0] < '0' || input[0] > '9' ) && input[0] != '+')
		write(2, "map error\n", 10);
	else
	{
		chars = ft_check_map_chars(input);
		input = ft_delete_chars(input);
		input = ft_delete_endlines(input, x);
		col = ft_calculate_columns(input);
		if (ft_valid_map(input, chars, 0, col) == 1)
			write(2, "map error\n", 10);
		else
			ft_map_solver(input, chars, col);
	}	
	free(input);
}

void	ft_map_solver(char *input, char **chars, int col)
{
	int		*coords;
	char	**map;

	coords = (int *)malloc(3 * sizeof(int));
	map = ft_convert_to_array(input, ft_atoi(chars[0]), col);
	coords = ft_biggest_sqr_check(map, chars, ft_atoi(chars[0]), col);
	map = ft_modify_map(map, coords, chars[3][0]);
	ft_print_out_array(map, ft_atoi(chars[0]));
	free(map);
}
