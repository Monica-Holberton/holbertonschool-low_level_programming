#include <stdio.h>
#include "main.h"

int main(void)
{
    char ch1 = 'A';
    char ch2 = 'm';
    
    printf("%c: %d\n", ch1, _isupper(ch1)); / Expected output: A: 1
    printf("%c: %d\n", ch2, _isupper(ch2)); / Expected output: m: 0
    
    return (0);
}
