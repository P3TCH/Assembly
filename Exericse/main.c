#include <stdio.h>

long ldgt(long a);

int main(){
    long x;
    printf("Enter a number: ");
    scanf("%ld" , &x);
    printf("Output = %ld\n ",ldgt(x));
    return 0;
}