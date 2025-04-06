#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

#define SUCCESS 0

/**
 * print_all - Prints anything based on format string
 * @format: List of types of arguments
 * Return: SUCCESS
 */
int print_all(const char * const format, ...)
{
va_list args;
int i = 0, printed = 0;
char *s, *sep = "";

va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
printed = 1;
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
printed = 1;
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
printed = 1;
break;
case 's':
s = va_arg(args, char *);
if (!s)
s = "(nil)";
printf("%s%s", sep, s);
printed = 1;
break;
}
if (printed)
sep = ", ";
printed = 0;
i++;
}
va_end(args);
printf("\n");
return (SUCCESS);
}
