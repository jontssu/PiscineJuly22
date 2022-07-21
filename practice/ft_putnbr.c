/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:37:53 by jole              #+#    #+#             */
/*   Updated: 2022/07/15 13:06:54 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	n;

	n = 1;
	if (nb < -2147483647)
	{
		ft_putchar('2');
		nb = -147483648;
	}
	if (nb < 0)
	{
		n = -1;
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar((nb + '0') * n);
}

int	main(void)
{
	write(1, "-", 1);
	ft_putnbr(-2147483648);
	return(0);
}
