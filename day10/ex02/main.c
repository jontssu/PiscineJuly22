/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:32:29 by jole              #+#    #+#             */
/*   Updated: 2022/07/11 18:04:17 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f) (int));

int	change(int arr)
{
	arr = arr + 1;
	return (arr);
}

int	main(void)
{
	int	arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int	*arr2;
	int	i;

	i = 0;
	arr2 = ft_map(arr, 5, &change);
	while (i < 5)
	{
		printf("%d\n", arr2[i]);
		i++;
	}
	return (0);
}
