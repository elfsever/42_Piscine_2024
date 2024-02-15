/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esever <esever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:21:28 by esever            #+#    #+#             */
/*   Updated: 2024/02/03 13:41:34 by esever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	swap;

	x = 0;
	while (x < size)
	{
		y = 1;
		while (y < size - x)
		{
			if (tab[y - 1] > tab[y])
			{
				swap = tab[y];
				tab[y] = tab[y - 1];
				tab[y - 1] = swap;
			}
			y++;
		}
		x++;
	}
}
