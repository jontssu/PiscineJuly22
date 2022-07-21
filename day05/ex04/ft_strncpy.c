/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:05:03 by jole              #+#    #+#             */
/*   Updated: 2022/07/05 22:32:10 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*dest != '\0')
	{
		dest[0] = '\0';
		dest++;
		i++;
	}
	while (i-- != 0)
		dest--;
	i = 0;
	while (i != n + 1)
	{
		dest[0] = src[0];
		src++;
		dest++;
		i++;
	}
	while (i-- != 0)
		dest--;
	return (dest);
}
