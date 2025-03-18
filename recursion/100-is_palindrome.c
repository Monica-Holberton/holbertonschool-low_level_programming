#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - Recursively checks if a string is a palindrome.
 * @s: The string to check.
 * @left: The left index.
 * @right: The right index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int left, int right)
{
if (left >= right)
return (1);
if (s[left] != s[right])
return (0);

return (check_palindrome(s, left + 1, right - 1));
}

/**
 * is_palindrome - Determines if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if `s` is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);

return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}
