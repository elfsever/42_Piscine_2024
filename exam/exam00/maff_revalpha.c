
#include <unistd.h>

int main()
{
	char x;
	char y;

	x = 'z';
	y = 'Y';
	while (x >= 'a' && y >= 'B')
	{
		write(1, &x, 1);
		write(1, &y, 1);
		x -= 2;
		y -= 2;
	}
	return (0);
}