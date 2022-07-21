/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_chars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:13:48 by jole              #+#    #+#             */
/*   Updated: 2022/07/20 20:37:31 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

char	*ft_delete_chars(char *str)
{
	char	*newstr;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	str = str - len;
	while (*str != '\n')
	{
		str++;
		i++;
	}
	str++;
	newstr = (char *)malloc(sizeof(char) * (len - i));
	newstr = ft_delete_chars_trim(newstr, str, len, i);
	str = str - (i + 1);
	free(str);
	return (newstr);
}

char	*ft_delete_chars_trim(char *newstr, char *str, int len, int i)
{
	while (*str != '\0')
	{
		*newstr = *str;
		newstr++;
		str++;
	}
	*newstr = '\0';
	newstr = newstr - (len - (i + 1));
	return (newstr);
}
