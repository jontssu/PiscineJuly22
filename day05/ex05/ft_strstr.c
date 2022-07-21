/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:02:38 by jole              #+#    #+#             */
/*   Updated: 2022/07/05 22:22:11 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	set_counters(int *str_c, int *to_find_c, char *str, char *to_find)
{
	*str_c = 0;
	*to_find_c = 0;
	while (str[*str_c] != '\0')
		(*str_c)++;
	while (to_find[*to_find_c] != '\0')
		(*to_find_c)++;
}

char	*ft_strstr(char *str, char *to_find)
{
	int		str_counter;
	int		to_find_counter;
	int		i;
	int		j;
	int		check;

	if (to_find[0] == '\0')
		return (&str[0]);
	set_counters(&str_counter, &to_find_counter, str, to_find);
	i = -1;
	j = -1;
	check = 0;
	while (i++ != str_counter && check != to_find_counter)
	{
		j = 0;
		check = 0;
		while (j++ != to_find_counter && check != to_find_counter)
		{
			if (str[j + i] == to_find[j])
				check++;
		}
	}
	if (check == to_find_counter)
		return (&str[i - 1]);
	return (0);
}
