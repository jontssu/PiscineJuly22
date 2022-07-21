/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2rush00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:18:37 by jole              #+#    #+#             */
/*   Updated: 2022/07/03 21:25:25 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_printchar(int x, int i, int y, int j)
{
	if ((i == 1 && j == 1) || (i == x && j == y))
	{
		ft_putchar('o');
	}
	else if ((i == x && j == 1) || (j == y && i == 1))
	{
		ft_putchar('o');
	}
	else if ((j > 1 && j < y) && (i == 1 || i == x))
	{
		ft_putchar('|');
	}
	else if ((i > 1 && i < x) && (j == 1 || j == y))
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		while (i <= x)
		{
			ft_printchar(x, i, y, j);
			i++;
		}
		i = 1;
		j++;
		ft_putchar('\n');
	}
}
