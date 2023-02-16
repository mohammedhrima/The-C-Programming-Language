#include <stdio.h>

#define STB_DS_IMPLEMENTATION
#include "stb_ds.h"


int main()
{
	char **arr = 0;
	arrput(arr, "hello");


	for (int i = 0; i < 1; i++)
		printf("%s\n", arr[i]);
	printf("length: %d\n", arrlen(arr));
}