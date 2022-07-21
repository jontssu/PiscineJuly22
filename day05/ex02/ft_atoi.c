/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:11:30 by jole              #+#    #+#             */
/*   Updated: 2022/07/05 16:36:41 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_calculate_return_value(char *str, int *i);

int	ft_atoi(char *str)
{
	long	return_value;
	int		is_negative;
	int		i;

	i = 0;
	is_negative = 1;
	while (*str == 32 || (*str > 8 && *str < 14))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_negative = -1;
		str++;
	}
	return_value = ft_calculate_return_value(str, &i);
	if (i > 19 && is_negative == -1)
		return (0);
	else if (i > 19)
		return (-1);
	return (return_value * is_negative);
}

long	ft_calculate_return_value(char *str, int *i)
{
	long	return_value;

	return_value = 0;
	while (*str >= '0' && *str <= '9')
	{
		return_value = return_value * 10 + (*str - 48);
		str++;
		*i += 1;
	}
	return (return_value);
}
