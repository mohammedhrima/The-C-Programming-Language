#include <stdio.h>

#define MAX(A,B) ((A) > (B)) ? (A) : (B)

int	main(void)
{
	int	x;

	x = MAX(2,5);
	printf("%d\n",x);
}
