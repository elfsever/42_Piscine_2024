/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esever <esever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:53:28 by esever            #+#    #+#             */
/*   Updated: 2024/02/13 15:00:08 by esever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if ((str[i]) == to_find[j])
		{
			while (to_find[j] != '\0')
			{
				if (str[i + j] == to_find[j])
					j++;
				else
					break ;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
#include <stdio.h>
int main()
{
	char str[] = "helllo";
	char st2[] ="a";
	printf("%s", ft_strstr(str,st2));
}