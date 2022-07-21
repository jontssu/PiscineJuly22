/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:44:57 by jole              #+#    #+#             */
/*   Updated: 2022/07/10 17:06:41 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_available(int puzzle[][9], int row, int col, int num)
{
    int row_start = (row/3) * 3;
    int col_start = (col/3) * 3;
    int i, j;

    for(i=0; i<9; ++i)
    {
        if (puzzle[row][i] == num) return 0;
        if (puzzle[i][col] == num) return 0;
        if (puzzle[row_start + (i%3)][col_start + (i/3)] == num) return 0;
    }
    return 1;
}

int fill_sudoku(int puzzle[][9], int row, int col)
{
    int i;
    if(row<9 && col<9)
    {
        if(puzzle[row][col] != 0)
        {
            if((col+1)<9) return fill_sudoku(puzzle, row, col+1);
            else if((row+1)<9) return fill_sudoku(puzzle, row+1, 0);
            else return 1;
        }
        else
        {
            for(i=0; i<9; ++i)
            {
                if(is_available(puzzle, row, col, i+1))
                {
                    puzzle[row][col] = i+1;
                    if((col+1)<9)
                    {
                        if(fill_sudoku(puzzle, row, col +1)) return 1;
                        else puzzle[row][col] = 0;
                    }
                    else if((row+1)<9)
                    {
                        if(fill_sudoku(puzzle, row+1, 0)) return 1;
                        else puzzle[row][col] = 0;
                    }
                    else return 1;
                }
            }
        }
        return 0;
    }
    else return 1;
}

int main(int argc, char **argv)
{
    int i;
	int j;
	int	x;
	int **ptr;
	int cpy;

	cpy = 0;
	x = 0;
	ptr = (int **)malloc(9 * sizeof(int *));
		while (x < 10)
		{
			ptr[x] = (int *)malloc(9 * sizeof(int));
			x++;
		}
	while (*argv != '\0')
	{
		ptr[0] = argv[0];
		argv++;
		ptr++;
		i++;

	}
	ptr[0] = '\0';
	while (i-- !=0)
		ptr--;
   /* int puzzle[9][9]={{0, 0, 0, 0, 0, 0, 0, 9, 0},
                      {1, 9, 0, 4, 7, 0, 6, 0, 8},
                      {0, 5, 2, 8, 1, 9, 4, 0, 7},
                      {2, 0, 0, 0, 4, 8, 0, 0, 0},
                      {0, 0, 9, 0, 0, 0, 5, 0, 0},
                      {0, 0, 0, 7, 5, 0, 0, 0, 9},
                      {9, 0, 7, 3, 6, 4, 1, 8, 0},
                      {5, 0, 6, 0, 8, 1, 0, 7, 4},
                      {0, 8, 0, 0, 0, 0, 0, 0, 0}};
*/
    if(fill_sudoku(puzzle, 0, 0))
    {
		i = 0;
        while (++i < 10)
        {
            j = 0;
			while(++j < 10)
			{
				ft_putchar(' ');
				ft_putchar(puzzle[i - 1][j - 1] + '0');
			}
		write(1, "\n", 1); //ft_putchar('\n');	
		}
    }
    else write(1, "Error\n", 6);

    return 0;
}
