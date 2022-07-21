/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:37:26 by jole              #+#    #+#             */
/*   Updated: 2022/07/06 22:32:40 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;

	j = argc;
	i = 0;
	if (argc == 1)
		return (0);
	while (j > 1)
	{
		argv++;
		k = 0;
		while (argv[0][k] != '\0')
		{
			ft_putchar(argv[0][k]);
			k++;
		}
		ft_putchar('\n');
		j--;
	}
}
