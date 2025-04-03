#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name using a function pointer
 * @name: name to print
 * @f: Pointer to a function
 *
 * Return: Null.
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
