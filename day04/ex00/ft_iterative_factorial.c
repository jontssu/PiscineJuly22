/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:38:17 by jole              #+#    #+#             */
/*   Updated: 2022/07/02 21:10:22 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorialb;

	factorialb = 1;
	while (nb >= 1 && nb < 12)
	{
		factorialb = factorialb * nb;
		nb--;
	}
	return (factorialb);
	if (nb == 0)
	{
		return (1);
	}
	return (0);
}
