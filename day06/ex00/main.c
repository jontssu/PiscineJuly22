/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:35:48 by jole              #+#    #+#             */
/*   Updated: 2022/07/06 19:15:42 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *string1;
	char *string2;

	string1 = "123aaasssrwerwerwrwrwerewrwersddd123";
	string2 = "123aaasssddd123";
	printf("%d\n", ft_strcmp(string1, string2));
	printf("%d\n", strcmp(string1, string2));	
	return (0);
}
