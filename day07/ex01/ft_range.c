/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:19:18 by jole              #+#    #+#             */
/*   Updated: 2022/07/07 21:45:11 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	if (min >= max)
	{
		ptr = NULL;
		return (ptr);
	}
	ptr = (int *)malloc((max - min) * sizeof(int));
	while (max - min != 0)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (&ptr[0]);
}
