/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eeravci <enes.nev@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:33:32 by eeravci           #+#    #+#             */
/*   Updated: 2024/10/05 18:19:32 by eeravci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int xx, int yy, int ii, int jj);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	i = 1;
	while (j <= y)
	{
		while (i <= x)
		{
			ft_putchar(x, y, i, j);
			i++;
		}
		write(1, "\n", 1);
		j++;
		i = 1;
	}
}
