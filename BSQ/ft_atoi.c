/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:44:50 by jole              #+#    #+#             */
/*   Updated: 2022/07/20 12:26:44 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int	ft_atoi(char *str)
{
	long	nb;
	int		n;

	n = 1;
	nb = 0;
	while (*str == 32 || (*str > 8 && *str < 14))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n = -1;
		str++;
	}
	while (*str > 47 && *str < 58)
	{
		nb = nb * 10;
		nb = nb + (*str - 48);
		str++;
	}
	return (nb * n);
}