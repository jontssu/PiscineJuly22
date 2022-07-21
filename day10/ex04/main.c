/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:04:29 by jole              #+#    #+#             */
/*   Updated: 2022/07/13 13:39:48 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_count_if(char **tab, int (*f) (char *));

int	check(char *str)
{
	while (*str != '\0')
	{
		if (*str == 'g')
			return (1);
		str++;
	}
	return (0);

}
int	main(void)
{
	char **str;

	str = (char **)malloc(5 * sizeof(char *));
	str[0] = "TWO";
	str[1] = "YgS";
	str[2] = "Jga";
	str[3] = "gaa";
	str[4] = 0;
	printf("%d\n", ft_count_if(str, &check));
	return (0);
}
