/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 09:45:16 by jole              #+#    #+#             */
/*   Updated: 2022/07/08 10:59:38 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int	atemp;
	int	btemp;
	int	ctemp;
	int	dtemp;

	atemp = ***a;
	btemp = *b;
	ctemp = *******c;
	dtemp = ****d;
	***a = btemp;
	*b = dtemp;
	*******c = atemp;
	****d = ctemp;
}
