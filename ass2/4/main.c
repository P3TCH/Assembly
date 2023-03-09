#include<stdio.h>

long problem04(long a , long b);

int main(){
    long x,y,z;
    printf("Enter three integers : ");
    scanf("%ld%ld",&x ,&y);
    printf("Output = %ld\n", problem04(x,y));
    return 0;
}