/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 23:03:17 by jole              #+#    #+#             */
/*   Updated: 2022/07/14 23:40:07 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define BUF_SIZE 10

void	ft_putstr(char *str);
int		ft_display_file(char *str);

void	ft_cat(int params, char **ptr)
{
	int		tmp;
	int		i;
	char	buf[BUF_SIZE + 1];

	i = 0;
	tmp = 1;
	if (params == 0)
	{
		while (tmp)
		{
			tmp = read(0, buf, BUF_SIZE);
			buf[tmp] = 0;
			ft_putstr(buf);
		}
	}
	while (params > i)
		ft_display_file(ptr[i++]);
}
