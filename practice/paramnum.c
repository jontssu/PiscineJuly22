/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:09:23 by jole              #+#    #+#             */
/*   Updated: 2022/07/15 19:34:08 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "0", 1);
	else
	{
		argc--;
		ft_putnbr(argc);
	}
	write(1, "\n", 1);
	return (0);
}
