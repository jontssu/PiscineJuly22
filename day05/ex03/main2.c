/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:15:36 by jole              #+#    #+#             */
/*   Updated: 2022/07/06 12:08:18 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);
void    ft_putstr(char *str);

int main (void)
{
	char *ft_strcpy_result;
	char *strcpy_result;
	char str_one[] = "psykaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaoosit";
	char str_two[100] = "qjeq";
	ft_strcpy_result = ft_strcpy(str_two,str_one);
	strcpy_result = strcpy(str_two, str_one);
	ft_putstr(ft_strcpy_result);
	ft_putstr("\n");
	ft_putstr(strcpy_result);
	return (0);
}
