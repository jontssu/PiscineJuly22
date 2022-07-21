/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin_read.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:54:05 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/20 20:48:45 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

char	*ft_stdin_read(int readval, int cnt, int *x)
{
	char	input[1];
	char	*str;
	char	*str2;

	while (readval)
	{
		readval = read(0, input, 1);
		if (readval == 0 && cnt < 1)
			return (NULL);
		if (readval == 0)
			return (str2);
		str = (char *)malloc((++cnt + 1) * sizeof(char));
		if (cnt != 1)
			ft_free_str(str, str2);
		str[cnt - 1] = input[0];
		str[cnt] = 0;
		readval = read(0, input, 1);
		if (readval == 0)
			return (str);
		str2 = (char *)malloc((++cnt + 1) * sizeof(char));
		ft_free_str(str2, str);
		str2[cnt - 1] = input[0];
		str2[cnt] = 0;
	}
	return (str = ft_change_x(str, x));
}

void	ft_free_str(char *str, char *str2)
{
	ft_strcpy(str, str2);
	free(str2);
}

char	*ft_change_x(char *str, int *x)
{
	*x = 1;
	return (str);
}
