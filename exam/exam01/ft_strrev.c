
int len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
char    *ft_strrev(char *str)
{
	int i;
	int l;
	int tmp;

	l = len(str) -1;
	i = 0;
	while (i < l)
	{
		tmp = str[i];
		str[i] = str[l];
		str[l] = tmp;
		i++;
		l--;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char str[] = "elif sever istanbul";
	printf("%s",ft_strrev(str));
}
