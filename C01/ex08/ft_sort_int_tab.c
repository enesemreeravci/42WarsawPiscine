/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eeravci <enes.nev@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:14:15 by eeravci           #+#    #+#             */
/*   Updated: 2024/10/09 19:33:25 by eeravci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	temp;

	while (size > 0)
	{
		start = 0;
		while (start < size - 1)
		{
			if (tab[start] > tab[start + 1])
			{
				temp = tab[start];
				tab[start] = tab[start + 1];
				tab[start + 1] = temp;
			}
			start++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int	tab[6];
	int	size;

	tab[6] = {7, 6, 3, 10, 9, 2};
	size = 6;
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4],
		tab[5]);
	return (0);
}
*/