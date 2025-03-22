#include <stdio.h>
/**
 * main - Demonstrates pointer manipulation to modify an array
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int n;
int a[5];
int *p;
a[2] = 1024;
p = &n;

*(p + 5) = 98;
puts("a[2] = 98");

return (0);
}
