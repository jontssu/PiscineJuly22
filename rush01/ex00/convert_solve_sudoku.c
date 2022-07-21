/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:44:57 by jole              #+#    #+#             */
/*   Updated: 2022/07/10 21:08:18 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

long	ft_calculate_return_value(char *str, int *i);

int	ft_atoi(char *str)
{
	long	return_value;
	int		is_negative;
	int		i;

	i = 0;
	is_negative = 1;
	while (*str == 32 || (*str > 8 && *str < 14))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_negative = -1;
		str++;
	}
	return_value = ft_calculate_return_value(str, &i);
	if (i > 19 && is_negative == -1)
		return (0);
	else if (i > 19)
		return (-1);
	return (return_value * is_negative);
}

long	ft_calculate_return_value(char *str, int *i)
{
	long	return_value;

	return_value = 0;
	while (*str >= '0' && *str <= '9')
	{
		return_value = return_value * 10 + (*str - 48);
		str++;
		*i += 1;
	}
	return (return_value);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_available(int ptr[][9], int row, int col, int num)
{
    int row_start = (row / 3) * 3;
    int col_start = (col / 3) * 3;
    int i;
	int j;
	
	i = 0;
    while(++i < 9)
    {
        if (ptr[row][i] == num)
			return 0;
        if (ptr[i][col] == num)
			return 0;
        if (ptr[row_start + (i % 3)][col_start + (i / 3)] == num)
			return 0;
    }
    return 1;
}

int fill_sudoku(int ptr[][9], int row, int col)
{
    int i;

    if(row < 9 && col < 9)
    {
        if(ptr[row][col] != 0)
        {
            if((col + 1) < 9) return fill_sudoku(ptr, row, col + 1);
            else if((row + 1) < 9) return fill_sudoku(ptr, row + 1, 0);
        ]else return 1;
        }
        else
        {
			i = 0;
           	while(++i < 9)
            {
                if(is_available(ptr, row, col, i + 1))
                {
                    ptr[row][col] = i + 1;
                    if((col + 1) < 9)
                    {
                        if(fill_sudoku(ptr, row, col +1)) return 1;
                        else ptr[row][col] = 0;
                    }
                    else if((row + 1) < 9)
                    {
                        if(fill_sudoku(ptr, row + 1, 0)) return 1;
                        else ptr[row][col] = 0;
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
	char **ptr;
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
		ptr[0] = ft_atoi(argv[0]);
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
    if(fill_sudoku(ptr, 0, 0))
    {
		i = 0;
        while (++i < 10)
        {
            j = 0;
			while(++j < 10)
			{
				ft_putchar(' ');
				ft_putchar(ptr[i - 1][j - 1] + '0');
			}
		write(1, "\n", 1);	
		}
    }
    else write(1, "Error\n", 6);

    return 0;
}
