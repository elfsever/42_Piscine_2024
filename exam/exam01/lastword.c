
#include <unistd.h>

int len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
#include <stdio.h>
int main(int ac, char *av[])
{
	int i;

	if(ac == 2)
	{
		i = len(av[1]) - 1;
		while ((av[1][i] == ' ') || (av[1][i] == '\t'))
		{
			i--;
		}
	
		while ((av[1][i] != ' ') && (av[1][i] != '\t'))
		{
				i--;
		}
		i++;
		while (((av[1][i] != ' ') && (av[1][i] != '\t') ) && av[1][i] != '\0')
		{
			write(1, &av[1][i], 1);
			i++;
			
		}	
	}
	write(1, "\n", 1);
}