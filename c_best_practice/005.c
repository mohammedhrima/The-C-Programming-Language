#include <stdio.h>

struct
{
	union
	{
		int		int_val;
		float	float_val;
		char	char_val;
	} val;
} my_array[10];

int	main(void)
{
	my_array[0].val.int_val = 3;
}
#include "Libft/libft.h"

typedef struct var
{
	char *firstname;
	char *lastname;
	void (*func)(int len, ...);
} var;

void print_full_name(int len, ...)
{
	va_list args;
	int i = 0;

	va_start(args, len);
	while (i < len)
	{
		ft_printf("%s ", va_arg(args, char *));
		i++;
	}
}

var *new_obj(char *firstname, char *lastname, void f(int l, ...))
{
	var *obj;

	obj = malloc(sizeof(var));
	obj->firstname = firstname;
	obj->lastname = lastname;
	obj->func = f;
	return (obj);
}

int main(void)
{
	var *x = new_obj("mohammed", "hrima", &print_full_name);
	x->func(2, x->firstname, x->lastname);
}