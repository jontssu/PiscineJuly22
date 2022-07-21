/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 08:33:01 by jole              #+#    #+#             */
/*   Updated: 2022/07/08 10:45:52 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_spy(char *str1, char *str2)
{
	int	k;
	int	i;
	int	j;

	k = 0;
	while (str2[k])
	k++;
	j = 0;
	i = 0;
	while (str1[i] && str2[j])
	{
		if (str1[i] == str2[j])
		{
			i++;
			j++;
			if (j == k && str1[i] == '\0')
				return (1);
		}
		else if (str1[i] == ' ')
		i++;
		else
			return (0);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
				argv[j][i] += 32;
			i++;
		}
		if (ft_spy(argv[j], "attack")
			|| ft_spy(argv[j], "president") || ft_spy(argv[j], "powers"))
		{
			write(1, "Alert!!!\n", 9);
			break ;
		}
		j++;
	}
	return (0);
}
