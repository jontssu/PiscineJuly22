/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:10:23 by jole              #+#    #+#             */
/*   Updated: 2022/07/01 21:00:45 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *********nbr)
{
	*********nbr = 42;
}

int	 main()
{
	int i;
	int *j;
	int **j2;
	int ***j3;
	int ****j4;
	int *****j5;
	int ******j6;
	int *******j7;
	int ********j8;
	int *********j9;

	j = &i;
	j2 = &j;
	j3 = &j2;
	j4 = &j3;
	j5 = &j4;
	j6 = &j5;
	j7 = &j6;
	j8 = &j7;
	j9 = &j8;
	ft_ft(j9);
	printf("%d", *********j9);
	return (0);
}
