#include <stdio.h>
#include <string.h>

typedef struct s_array
{
	int *ptr;
	size_t size;
} t_array;

void swap(int *arr, size_t len)
{
	size_t mid;
	int i;
	int tmp;

	mid = len / 2;
	i = 0;
	while (i < (int)mid)
	{

		tmp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = tmp;
		i++;
	}
}

int main(void)
{
	t_array arr;
	int x[] = {7, 2, 3, 1, 6, 5};
	arr = (t_array){
		.ptr = x,
		.size = sizeof(arr.ptr),
	};
}
