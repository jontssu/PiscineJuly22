/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:15:36 by jole              #+#    #+#             */
/*   Updated: 2022/07/05 20:46:24 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
void    ft_putstr(char *str);

int main (void)
{
	char *ft_strcpy_result;
	char *strcpy_result;
	char str_one[] = "psykoosit";
	char str_two[] = "oiqwjeiowqjeq";
	ft_strcpy_result = ft_strncpy(str_two,str_one, 7);
	strcpy_result = strncpy(str_two, str_one, 7);
	ft_putstr(ft_strcpy_result);
	ft_putstr(strcpy_result);
	return (0);
}
