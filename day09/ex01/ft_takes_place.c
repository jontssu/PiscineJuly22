/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:01:45 by jole              #+#    #+#             */
/*   Updated: 2022/07/07 18:31:49 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char	*str;

	str = "THE FOLLOWING TAKES PLACE BETWEEN";
	if (hour == 0)
		printf("%s %d.00 A.M. AND %d.00 A.M.\n", str, hour + 12, hour + 1);
	else if (hour == 11)
		printf("%s %d.00 A.M. AND %d.00 P.M.\n", str, hour, hour + 1);
	else if (hour > 0 && hour < 11)
		printf("%s %d.00 A.M. AND %d.00 A.M.\n", str, hour, hour + 1);
	else if (hour == 12)
		printf("%s %d.00 P.M. AND %d.00 P.M.\n", str, hour, hour - 11);
	else if (hour == 23)
		printf("%s %d.00 P.M. AND %d.00 A.M.\n", str, hour - 12, hour - 11);
	else if (hour >= 12 && hour < 23)
		printf("%s %d.00 P.M. AND %d.00 P.M.\n", str, hour - 12, hour -11);
}
