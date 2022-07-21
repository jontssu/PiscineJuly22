/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:03:24 by jole              #+#    #+#             */
/*   Updated: 2022/07/11 20:10:02 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f) (char*))
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]))
			x++;
		i++;
	}
	return (x);
}
