/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:25:52 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/20 20:50:46 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

char	*ft_file_read(char *file, int *x)
{
	int		openval;
	int		readval;
	int		letter;
	char	input[1];
	char	*str;

	letter = 0;
	readval = 1;
	str = (char *)malloc(ft_malloc_cnt(file) * sizeof(char));
	openval = open(file, O_RDONLY);
	if (openval < 0)
		return (0);
	while (readval)
	{
		readval = read(openval, input, 1);
		str[letter++] = input[0];
	}
	str[letter] = 0;
	close(openval);
	return (str = ft_change_x_2(str, x));
}

int	ft_malloc_cnt(char *file)
{
	int		readval;
	int		count;
	char	input[5000];
	int		openval;

	readval = 1;
	count = 0;
	openval = open(file, O_RDONLY);
	if (openval < 0)
		return (0);
	while (readval)
	{
		readval = read(openval, input, 5000);
		count += readval;
	}
	close(openval);
	return (count);
}

char	*ft_change_x_2(char *str, int *x)
{
	*x = 2;
	return (str);
}
