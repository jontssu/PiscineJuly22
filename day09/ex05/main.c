/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:49:01 by jole              #+#    #+#             */
/*   Updated: 2022/07/08 08:21:53 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_button(int i, int j, int k);

int	main()
{
	
	
	printf("%d\n", ft_button(1, 1, 1));
	printf("%d\n", ft_button(1, 2, 1));
	printf("%d\n", ft_button(1, 3, 1));
   	printf("%d\n", ft_button(1, 2, 1));
	printf("%d\n", ft_button(1, 3, 1));
	printf("%d\n", ft_button(1, 1, 2));
	printf("%d\n", ft_button(1, 2, 2));
	printf("%d\n", ft_button(1, 3, 2));
	printf("%d\n", ft_button(1, 1, 3));
	printf("%d\n", ft_button(1, 2, 3));
	printf("%d\n", ft_button(1, 3, 3));
	printf("%d\n", ft_button(2, 1, 1));
	printf("%d\n", ft_button(3, 1, 1));
	printf("%d\n", ft_button(3, 1, 2));
	printf("%d\n", ft_button(3, 1, 3));
	printf("%d\n", ft_button(3, 2, 1));
	printf("%d\n", ft_button(3, 2, 2));
	printf("%d\n", ft_button(3, 2, 3));
	printf("%d\n", ft_button(3, 3, 1));
	printf("%d\n", ft_button(3, 3, 2));
	printf("%d\n", ft_button(3, 3, 3));
	return (0);
}
