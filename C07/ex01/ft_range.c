/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esever <esever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:09:28 by esever            #+#    #+#             */
/*   Updated: 2024/02/13 15:36:29 by esever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*result;

	if (min >= max)
	{
		return (NULL);
	}
	range = max - min;
	result = (int *)malloc(sizeof(int) * (range));
	if (range == '\0')
	{
		return (NULL);
	}
	range = 0;
	while (max > min)
	{
		result[range] = min;
		min++;
		range++;
	}
	return (result);
}
