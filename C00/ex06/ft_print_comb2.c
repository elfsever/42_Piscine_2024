/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esever <esever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:10:53 by esever            #+#    #+#             */
/*   Updated: 2024/01/28 15:55:59 by esever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = -1;
	while (x++ < 98)
	{
		y = x;
		while (y++ < 99)
		{
			ft_char('0' + x / 10);
			ft_char('0' + x % 10);
			ft_char(' ');
			ft_char('0' + y / 10);
			ft_char('0' + y % 10);
			if (x != 98)
			{
				ft_char(',');
				ft_char(' ');
			}
		}
	}
}
