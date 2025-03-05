#include "main.h"

\**
* print_alphabet - Entry point
* Description: print strinf (loop & putchar)
*
*/

void print_alphabet(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		_putchar(s);
		s++;
	}
	_putchar('\n');
}
