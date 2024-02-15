
int	ft_atoi(char *str)
{
	int i;
	int result;
	int sign;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i]  == 32)
		i++;
	while ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}

	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] -48;
		i++;
	}
	
	return (result * sign);
}

#include <stdio.h>
int main()
{
	char str[] ="----2345a4";
	printf("%d", ft_atoi(str));
}