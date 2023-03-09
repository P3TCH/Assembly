#include<stdio.h>

long problem03(long a);

int main(){
    long x,y,z;
    printf("Enter three integers : ");
    scanf("%ld",&x);
    printf("Output = %ld\n", problem03(x));
    return 0;
}