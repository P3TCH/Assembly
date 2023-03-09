#include<stdio.h>

long problem05(long a);

int main(){
    long x,y,z;
    printf("Enter three integers : ");
    scanf("%ld",&x);
    printf("Output = %ld\n", problem05(x));
    return 0;
}