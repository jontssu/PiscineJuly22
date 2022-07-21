/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_convert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:51:08 by jole              #+#    #+#             */
/*   Updated: 2022/07/17 13:08:44 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_array_convert(char *str, int p, int row, int col) // p = 0
{
	char	**array;
	int		j;
	int		k;

	array = (char **)malloc(sizeof(char *) * row);
		while (p < (col + 1))
		{
			array[p] = (char *)malloc(sizeof(char) * (col + 1));
			p++;
		}
	j = 0;
	k = 0;
	while (j < row && *str != '\0')
	{
		while (k < col)
		{
			array[j][k++] = *str;
			str++;
		}
		if (*str == '\n')
			str++;
		k = 0;
		j++;
	}
	return (array);
}

int	main()
{
	char **array;

	array = ft_array_convert("koira\nkissa\nkoira", 0, 3, 5);
	printf("%s", array[0]);
	return (0);
}
