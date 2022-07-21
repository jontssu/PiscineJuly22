/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 22:23:48 by jole              #+#    #+#             */
/*   Updated: 2022/07/02 23:46:58 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb,int power)
{
	int	b;
	
	if	(nb == 1 || (power == 0 && nb == 0))
	{	
		return (1);
	}
	if	(power < 0)
	{
		return (0);
		}
	if	(power == 0)
	{
		return (1);
		}
	b = nb;
	while (power > 1)
	{
		if (nb <= 0)
			break;
		nb *= b;
		power--;
	}
	return nb;
}
