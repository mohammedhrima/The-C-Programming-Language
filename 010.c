#include <stdio.h>

int main(void)
{
	int i = 0;
	char *str = "abcdefgh";

	char *start = str;
	while (*str)
		str++;
	printf("%d\n", str - start);	
}
