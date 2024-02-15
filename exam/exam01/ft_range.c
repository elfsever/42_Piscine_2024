
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int range;
	int *result;

	if(start >= end)
	{
		return(0);
	}

	range = end - start;
	result = (int *)malloc(sizeof(int) * (range));

	range = 0;
	while (end > start)
	{
		result[range] = start;
		start++;
		range++;
	}
	return (result);
}

#include <stdio.h>

int main()
{
	int min = 5;
	int max = 13;
	int *tab;
	tab = ft_range(min, max);

	int i = 0;
	while (i < max -min)
	{
		printf ("%d, ", tab[i] );
		i++;
	}
	
	return (0);
		

	
}