/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:50:26 by jole              #+#    #+#             */
/*   Updated: 2022/07/13 13:52:50 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f) (int, int));

int	ft_check(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a == b)
		return (0);
	else
		return (1);
}

int	main(void)
{
	int	ptr[5] = {-88, 3, 37, 3, 7};

	printf("%d\n", ft_is_sort(ptr, 3, &ft_check));
	return (0);
}
