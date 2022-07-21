/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_chars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:27:09 by jole              #+#    #+#             */
/*   Updated: 2022/07/20 20:08:18 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

char	**ft_check_map_chars(char *str)
{
	char	**chars;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (*str != '\n')
	{
		str++;
		len++;
	}
	chars = (char **)malloc(sizeof(char *) * 4);
	while (i < 4)
	{
		chars[i] = (char *)malloc(sizeof(char) * len);
		i++;
	}
	str = str - len;
	i = 0;
	chars = ft_alloc_into_array(str, chars, len, i);
	return (chars);
}

char	**ft_alloc_into_array(char *str, char **chars, int len, int i)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (i < (len - 3))
	{
		chars[k][j] = str[i];
		j++;
		i++;
	}
	chars[k][j] = '\0';
	k++;
	while (i < len)
	{
		chars[k][0] = str[i];
		chars[k][1] = '\0';
		i++;
		k++;
	}
	return (chars);
}
