/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eeravci <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:48:13 by eeravci           #+#    #+#             */
/*   Updated: 2024/10/19 16:34:40 by eeravci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	rev_param(int argc, char **argv)
{
	int	first;
	int	last;

	last = argc - 1;
	while (last > 0)
	{
		first = 0;
		while (first < ft_strlen(argv[last]))
		{
			ft_putchar(argv[last][first]);
			first++;
		}
		ft_putchar('\n');
		last--;
	}
}

int	main(int argc, char **argv)
{
	rev_param(argc, argv);
	return (0);
}
