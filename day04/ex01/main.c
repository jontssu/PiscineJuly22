/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:36:47 by jole              #+#    #+#             */
/*   Updated: 2022/07/02 22:00:07 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb);

int main()

{
	int b;
	b = ft_recursive_factorial(6);
	printf("%d\n", ft_recursive_factorial(4));
	return(0);
}
