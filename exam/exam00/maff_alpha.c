
#include <unistd.h>

void  ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
	
	char x;
	char y;

	x = 'a';
	y = 'B';
	while (x <= 'z' && y <= 'Z')
	{
		ft_putchar(x);
		ft_putchar(y);
		x += 2;
		y += 2;
	}
	ft_putchar('\n');
	return (0);
}