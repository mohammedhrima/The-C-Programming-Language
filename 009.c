#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char *str = malloc(20);
	unsigned long num1, num2;
	num1 = (unsigned long)str;
	str = malloc(20);
	num2 = (unsigned long)str;
	str = malloc(20);
	// str = malloc(20);
	// str = malloc(20);
	int i = 0;
	while (i < 20)
	{
		str[i] = 'c';
		i++;
	}
	printf("%p -> %d\n", str, (int)str);

	int i = 0;
	while (i < strlen(str))
	{
		i++;
	}
	
	// system("leaks a.out");
}