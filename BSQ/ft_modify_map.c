/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modify_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:49:55 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/19 22:46:31 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

char	**ft_modify_map(char **map, int *coords, char filler)
{
	int		row;
	int		col;
	int		size;
	int		x;
	int		y;

	row = coords[0];
	col = coords[1];
	size = (coords[2]);
	x = 0;
	while (size > x)
	{
		y = 0;
		while (size > y)
		{
			map[row - x][col - y] = filler;
			y++;
		}
		x++;
	}
	return (map);
}
