#include <stdio.h>

long add1000(long a);

int main(){
    long x;

    printf("Enter a number: ");
    scanf("%ld", &x);

    printf("Output = %ld\n",add1000(x));
    return 0;
}