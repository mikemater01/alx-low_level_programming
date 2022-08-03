#include <stdlib.h>
#include "function_pointers.h"
/*
 * print_name - print a name
 * @name: input name
 * @f: function pointer
 *
 * return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
