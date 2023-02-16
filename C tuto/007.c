#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 10;
	{
		y = 10;
		x++;
	}
	printf("->%d\n", x);
}
