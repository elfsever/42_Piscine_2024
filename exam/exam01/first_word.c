
#include <unistd.h>

int ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != 32)
		i++;
	return (i);
}
void first_word(char *str)
{
	int i;

	i = 0;
	while (i <= ft_len(str) - 1)
	{
		write(1, &str[i], 1);
		i++;
	}

}

int main ()
{
	char str[]  = "elif sever";
	first_word(str);
}