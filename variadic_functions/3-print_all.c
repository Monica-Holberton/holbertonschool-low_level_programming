#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the format.
 * @format: The format string containing the types of arguments.
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
char current;

va_start(args, format);

while (format && format[i])
{
current = format[i];

if (current == 'c')  /*Print char*/
printf("%c", va_arg(args, int));

else if (current == 'i')  /*Print integer*/
printf("%d", va_arg(args, int));

else if (current == 'f')  /* Print float*/
printf("%f", va_arg(args, double));

else if (current == 's')  /*Print string, or (nil) if NULL*/
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");

else
printf("%s", str);
}

/*Print separator if it's not the last character*/
if (format[i + 1] != '\0' && (current == 'c' || current == 'i' || current == 'f' || current == 's'))
printf(", ");

i++;
}

va_end(args);
printf("\n");
}
