/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:48:00 by jole              #+#    #+#             */
/*   Updated: 2022/07/17 12:42:51 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_count_s(char *str)
{
	int		i;
	int		row;
	int		col;

	i = 0;
	row = 0;
	col = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			i++;
			row++;
			if (str[i] != '\0')
			{
			col = 0;
			}
		}
		else
		{
			i++;
			col++;
		}
	}
	return (ft_array_convert(str, i, row, col));
}
