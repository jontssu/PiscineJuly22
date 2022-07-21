/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:28:34 by jole              #+#    #+#             */
/*   Updated: 2022/07/14 19:13:24 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 10

void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int		fd;
	char	vuff[BUF_SIZE + 1];
	int		jesse;

	jesse = 1;
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if (argc < 2)
		write(2, "File name missing.\n", 19);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			return (0);
		while (jesse)
		{
			jesse = read(fd, vuff, BUF_SIZE);
			vuff[jesse] = '\0';
			ft_putstr(vuff);
		}
		close(fd);
	}
	return (0);
}
