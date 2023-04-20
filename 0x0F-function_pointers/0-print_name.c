#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Prints a name
 * @name: the name to print
 * @f: the function to print with
 *
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
