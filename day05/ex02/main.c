/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:33:59 by jole              #+#    #+#             */
/*   Updated: 2022/07/06 11:54:37 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int main()
{
	printf("%d\n", ft_atoi("-  		-232938"));
    printf("%d\n", atoi("-  		-232938"));
    printf("%d\n", ft_atoi("1.3f"));
    printf("%d\n", atoi("1.3f"));
    printf("%d\n", ft_atoi("+22323"));
    printf("%d\n", atoi("+22323"));
    printf("%d\n", ft_atoi(""));
    printf("%d\n", atoi(""));
    printf("%d\n", ft_atoi("--"));
    printf("%d\n", atoi("--"));
    printf("%d\n", ft_atoi("NULL"));
    printf("%d\n", atoi("NULL"));
    printf("%d\n", ft_atoi("13121789312239392832"));
    printf("%d\n", atoi("13121789312239392832"));
	printf("%d\n", ft_atoi("1312178931223992832"));
    printf("%d\n", atoi("1312178931223992832"));
    printf("%d\n", ft_atoi("0.000001"));
    printf("%d\n", atoi("0.000001"));
    printf("%d\n", ft_atoi("1283718jkh"));
    printf("%d\n", atoi("1283718jkh"));
	printf("%d\n", ft_atoi("-2147483648"));
    printf("%d\n", atoi("-2147483648"));
	printf("%d\n", ft_atoi("2147483647"));
    printf("%d\n", atoi("2147483647"));
	return (0);
}
