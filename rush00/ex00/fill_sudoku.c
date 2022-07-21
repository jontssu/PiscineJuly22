/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_sudoku.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:12:16 by jole              #+#    #+#             */
/*   Updated: 2022/07/10 13:08:09 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	is_available(int puzzle[][9], int row, int col, int num);
int	fill_sudoku(int puzzle[][9], int row, int col);

int	is_available(int puzzle[][9], int row, int col, int num)
{
	int row_start;
	int col_start;
	int i;
	int j;

	row_start = (row / 3) * 3;
	col_start = (col / 3) * 3;
	i = 0;
	while (i < 9)
	{
		i++;
		if (puzzle[row][i] == num)
			return (0);
		if (puzzle[i][col] == num)
			return (0);
		if (puzzle[row_start + (i % 3)][col_start + (i / 3)] == num)
			return (0);
	}
	return (1);
}

int	fill_sudoku(int puzzle[][9], int row, int col)
{
	int i;

	i = 0;
	if (row < 9 && col < 9)
	{
		if (puzzle[row][col] != 0)
		{
			if ((col + 1) < 9)
				return (fill_sudoku(puzzle, row, col + 1));
			else if ((row + 1) < 9)
				return (fill_sudoku(puzzle, row + 1, 0));
			else
				return (1);
		}
		else
		{
			i = 0;
			while (i < 9)
			{
				i++;
				if (is_available(puzzle, row, col, i + 1))
				{
					puzzle[row][col] = i + 1;
					if ((col + 1) < 9)
					{
						if (fill_sudoku(puzzle, row, col + 1))
							return (1);
						else
							puzzle[row][col] = 0;
					}
					else if ((row + 1) < 9)
					{
						if (fill_sudoku(puzzle, row, col + 1))
							return (1);
						else
							puzzle[row][col] = 0;
					}
					else
						return (1);
				}
			}	
		}
		return (0);
	}
	else
		return (1);
}

int	main()
{
	int	i;
	int	j;

	int	puzzle[9][9] = {{0, 0, 0, 0, 0, 0, 0, 9, 0},
                      {1, 9, 0, 4, 7, 0, 6, 0, 8},
                      {0, 5, 2, 8, 1, 9, 4, 0, 7},
                      {2, 0, 0, 0, 4, 8, 0, 0, 0},
                      {0, 0, 9, 0, 0, 0, 5, 0, 0},
                      {0, 0, 0, 7, 5, 0, 0, 0, 9},
                      {9, 0, 7, 3, 6, 4, 1, 8, 0},
                      {5, 0, 6, 0, 8, 1, 0, 7, 4},
                      {0, 8, 0, 0, 0, 0, 0, 0, 0}};
	if (fill_sudoku(puzzle, 0, 0))
	{
		write(1,"\n+-----+-----+-----+\n", 21);
		i = 0;
		while (i < 10)
		{
			i++;
			j = 0;
			while (j < 10)
			{
				j++;
				printf("|%d", puzzle[i - 1][j - 1]);
			}
			printf("|\n");
			if (i % 3 == 0)
				printf("+-----+-----+-----+\n");
		}
	}
	else
		write(1, "Error\n", 6);
		return (0);
}
