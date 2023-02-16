#include <stdio.h>
#include <string.h>

void swap(int *arr, size_t len)
{
	size_t mid = len / 2;
	int i = 0;
	int tmp;
	while (i < mid)
	{
		tmp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = tmp;
		i++;
	}
}

int main(void)
{
	//initiallize variables
	int arr1[] = {1, 2, 3, 4, 5, 6};
	size_t len = sizeof(arr1) / sizeof(int);
	// int arr2[4];
	swap(arr1, len);
	printf("\n-------------------\n");
	int i = 0;
	while (i < len)
	{
		printf("%d ", arr1[i]);
		i++;
	}
}