/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:48:45 by jole              #+#    #+#             */
/*   Updated: 2022/07/07 17:19:06 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_button(int i, int j, int k)
{
	if (i == j || i == k)
		return (i);
	if (k == j)
		return (k);
	if ((i > j && i < k) || (i < j && i > k))
		return (i);
	if ((j > i && j < k) || (j > k && j < i))
		return (j);
	if ((k > i && k < j) || (k > j && k < i))
		return (k);
	return (0);
}