/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:06:39 by jole              #+#    #+#             */
/*   Updated: 2022/07/08 08:22:10 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
unsigned int	ft_collatz_conjecture(unsigned int base);

int	main()
{
	printf("%u\n", ft_collatz_conjecture(1));
	return (0);
}