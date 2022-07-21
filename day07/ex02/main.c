/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:01:42 by jole              #+#    #+#             */
/*   Updated: 2022/07/08 11:39:11 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *ptr;
	int i;
	int	diff;

	i = 0;
	diff = ft_ultimate_range(&ptr, -15, 12);

	while (i != 24)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
	return (0);
}
