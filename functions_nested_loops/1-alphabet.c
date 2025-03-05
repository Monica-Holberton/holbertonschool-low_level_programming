#include <stdio.h>

void print_alphabet(){
	char s='a';
	while(s<='z'){
		putchar(s);
		s++;
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();

	return (0);
}
