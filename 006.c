#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	register char *str;

	str = malloc(100);
	str = malloc(100);
	str = malloc(100);
	system("leaks a.out");
}