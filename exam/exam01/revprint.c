
#include <unistd.h>

char *ft_rev_print (char *str) 
{
	int i;

	i = 0;
	while (str[i])
	{	
		i++;
	}
	while (i > 0)
	{
		write(1, &str[i -1],1);
		i--;
	}
	write(1,"\n",1);
	return (0);
}

int main()
{
	char str [] = "elif";

	ft_rev_print(str);
}
