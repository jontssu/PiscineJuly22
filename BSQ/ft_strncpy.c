/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 21:44:43 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/20 01:07:10 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*ptr;

	ptr = dest;
	while (*src != 0 && n != 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = 0;
	ptr++;
	while (*ptr != 0)
	{
		*ptr = 0;
		ptr++;
	}
	return (dest);
}
