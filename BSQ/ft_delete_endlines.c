/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_endlines.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:31:24 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/20 20:06:09 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

char	*ft_delete_endlines(char *str, int x)
{
	int		letter;

	letter = 0;
	while (str[letter] != 0)
		letter++;
	return (str = ft_strncpy(str, str, (letter - x)));
}
