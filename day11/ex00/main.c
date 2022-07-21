/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:23:30 by jole              #+#    #+#             */
/*   Updated: 2022/07/13 15:36:24 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

int	main(void)
{
	t_list	*ptr;

	ptr = ft_create_elem("123moi");
	printf("%s\n", ptr->data);
	return(0);
}
