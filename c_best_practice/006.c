#include "Libft/libft.h"

uint64_t *arrjoin(uint64_t *addresses, uint64_t new_address)
{
	uint64_t *uint_ptr;
	static size_t size;

	if (!addresses)
		addresses = malloc(sizeof(uint64_t));
	uint_ptr = (uint64_t *)malloc((size + 1) * sizeof(uint64_t));
	ft_memcpy(uint_ptr, addresses, size + 1);
	free(addresses);
	uint_ptr[size] = new_address;
	size++;
	return (uint_ptr);
}

uint64_t **arr_addresses(void)
{
	static uint64_t *addresses;

	return (&addresses);
}

uint64_t allocate(size_t size_to_allocate)
{
	// static uint64_t *addresses;
	void *ptr;

	ptr = malloc(size_to_allocate);
	*arr_addresses() = arrjoin(*arr_addresses(), (uint64_t)ptr);

	return ((uint64_t)ptr);
}

int main(void)
{
	// uint64_t adress1, adress2;
	// char *str = malloc(100);
	// adress1 = (uint64_t)str;
	// // free((void *)adress);
	// str = malloc(100);
	// adress2 = (uint64_t)str;
	// str = malloc(100);
	// system("leaks a.out");
	char *ptr = (char *)allocate(10);
	ptr = (char *)allocate(10);
	ptr = (char *)allocate(10);
	ptr = (char *)allocate(10);
	ptr = (char *)allocate(10);
	ptr = (char *)allocate(10);
	ptr = (char *)allocate(10);
	ptr = (char *)allocate(10);
	ptr = (char *)allocate(10);

	ft_printf("%s\n", ptr);
	while (1)
		;
}
