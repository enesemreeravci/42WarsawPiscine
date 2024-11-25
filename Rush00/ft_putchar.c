/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eeravci <enes.nev@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:01:48 by eeravci           #+#    #+#             */
/*   Updated: 2024/10/06 12:22:55 by eeravci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int xx, int yy, int ii, int jj)

{
	if ((ii == 1 || ii == xx) && (jj == 1 || jj == yy))
	{
		write(1, "o", 1);
	}
	else if (ii == 1 || ii == xx)
	{
		write(1, "|", 1);
	}
	else if (jj == 1 || jj == yy)
	{
		write(1, "-", 1);
	}
	else
	{
		write(1, " ", 1);
	}
}
