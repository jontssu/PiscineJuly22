/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_out_array.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:02:32 by jole              #+#    #+#             */
/*   Updated: 2022/07/19 23:20:49 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

void	ft_print_out_array(char **array, int row)
{
	int	string;

	string = 0;
	while (string < row)
	{
		ft_putstr(array[string++]);
		write(1, "\n", 1);
	}
}
