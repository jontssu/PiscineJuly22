/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:02:56 by jole              #+#    #+#             */
/*   Updated: 2022/07/07 18:10:06 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int	i;

	i = -1;
	if (base > 1)
	{
		if (base % 2 == 0)
			i = ft_collatz_conjecture(base / 2);
		else
			i = ft_collatz_conjecture(base * 3 + 1);
	}
	i++;
	return (i);
}
