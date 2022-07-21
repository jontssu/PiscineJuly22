/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_biggest_square_check.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:17:47 by jole              #+#    #+#             */
/*   Updated: 2022/07/20 15:56:54 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int	**ft_make_square_check_map(char **map, char **chars, int row, int col)
{
	int	**map2;
	int	i;
	int	k;

	i = 0;
	map2 = (int **)malloc(sizeof(int *) * row);
	while (i < row)
		map2[i++] = (int *)malloc(sizeof(int) * col);
	i = 0;
	while (i < row)
	{
		k = 0;
		while (k < col)
		{
			if (map[i][k] == chars[1][0])
				map2[i][k] = 1;
			else
				map2[i][k] = 0;
			k++;
		}
		i++;
	}
	return (map2);
}

int	**ft_assign_biggest_square(int **map2, int row, int col)
{
	int	r;
	int	left;
	int	top;
	int	topleft;
	int	c;

	r = 1;
	while (r < row)
	{
		c = 1;
		while (c < col)
		{
			if (map2[r][c] != 0)
			{
				topleft = map2[r - 1][c - 1];
				left = map2[r][c - 1];
				top = map2[r - 1][c];
				top = ft_smallest(topleft, left, top);
				map2[r][c] = map2[r][c] + top;
			}
			c++;
		}
		r++;
	}
	return (map2);
}

int	*ft_find_coords(int **map2, int row, int col)
{
	int	r;
	int	c;
	int	*coords;

	coords = (int *)malloc(3 * sizeof(int));
	coords[2] = 0;
	r = 0;
	while (r < row)
	{
		c = 0;
		while (c < col)
		{
			if (map2[r][c] > coords[2])
			{
				coords[2] = map2[r][c];
				coords[1] = c;
				coords[0] = r;
			}
			c++;
		}
		r++;
	}
	return (coords);
}

int	ft_smallest(int topleft, int left, int top)
{
	if (topleft <= left && topleft <= top)
		return (topleft);
	else if (left <= topleft && left <= top)
		return (left);
	else
		return (top);
}

int	*ft_biggest_sqr_check(char **map, char **chars, int row, int col)
{
	int		**map2;
	int		*coords;

	map2 = ft_make_square_check_map(map, chars, row, col);
	map2 = ft_assign_biggest_square(map2, row, col);
	coords = ft_find_coords(map2, row, col);
	return (coords);
}
