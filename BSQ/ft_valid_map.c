/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:31:50 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/20 20:23:43 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int	ft_valid_map(char *map, char **chars, int rowcheck, int colcnt)
{
	int		rowcnt;
	char	empty;
	char	obs;
	int		check;

	rowcnt = ft_atoi(chars[0]);
	empty = chars[1][0];
	obs = chars[2][0];
	while (*map != 0)
	{
		check = 0;
		while ((*map == empty || *map == obs) && (colcnt >= check))
		{
			map++;
			check++;
		}
		if (colcnt != check)
			return (1);
		rowcheck++;
		map++;
	}
	if (rowcheck != rowcnt)
		return (1);
	return (0);
}
