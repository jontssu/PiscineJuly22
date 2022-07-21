/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_array.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:22:03 by jole              #+#    #+#             */
/*   Updated: 2022/07/20 13:06:32 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

char	**ft_convert_to_array(char *str, int row, int col)
{
	char	**array;
	int		x;
	int		i;

	x = 0;
	i = 0;
	array = (char **)malloc(sizeof(char *) * row);
	while (x < row)
			array[x++] = (char *)malloc(sizeof(char) * (col + 1));
	while (i < row)
	{
		x = 0;
		while (x < col)
		{
			array[i][x] = *str;
			str++;
			x++;
		}
		array[i][x] = 0;
		str++;
		i++;
	}
	return (array);
}
