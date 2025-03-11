#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random password for 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int sum = 0, target = 2772;
char pass;

srand(time(NULL));

while (sum < target - 127)
{
pass = (rand() % 94) + 33;
putchar(pass);
sum += pass;
}

putchar(target - sum);

return (0);
}
