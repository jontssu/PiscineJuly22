/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:28:34 by jole              #+#    #+#             */
/*   Updated: 2022/07/14 23:39:53 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 10

void	ft_putstr(char *str);

int	ft_display_file(char *str)
{
	int		fd;
	char	vuff[BUF_SIZE + 1];
	int		jesse;

	jesse = 1;
	fd = open(str, O_RDONLY);
	if (fd < 0)
	{			
		ft_putstr("cat: ");
		ft_putstr(str);
		ft_putstr(": No such file or directory\n");
		return (0);
	}
	while (jesse)
	{
		jesse = read(fd, vuff, BUF_SIZE);
		vuff[jesse] = '\0';
		ft_putstr(vuff);
	}
	close(fd);
	return (0);
}
