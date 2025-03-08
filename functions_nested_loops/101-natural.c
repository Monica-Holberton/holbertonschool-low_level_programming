#include <stdio.h>

int main(void)
{
    int sum=0;
    for(int c=0; c<1024; c++){
        if (c%3==0 || c%5==0){
            sum= c + sum

        }
    }
    printf("The Sum %d \n",sum);
    return (0);
}