#include "main.h"
#include <string.h>

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 * Negative if s1 < s2,
 * Positive if s1 > s2.
 * Return: 0 if s1 and s2 are equal,
 */
int _strcmp(char *s1, char *s2)
{
char s1[] = "Hello";
char s2[] = "World!";

int cmp = strcmp(s1, s2);

if (cmp > 0)
printf("%s is greater than %s\n", s1, s2);

}else if (cmp < 0){
printf("%s is greater than %s\n", s2, s1);

} else {
printf("%s is equal to %s\n", s1, s2);
}
