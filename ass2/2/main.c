#include<stdio.h>

long problem02(long a);

int main(){
    long x,y,z;
    printf("Enter three integers : ");
    scanf("%ld",&x);
    printf("Output = %ld\n", problem02(x));
    return 0;
}