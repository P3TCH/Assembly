#include<stdio.h>

long problem01(long a , long b , long c);

int main(){
    long x,y,z;
    printf("Enter three integers : ");
    scanf("%ld%ld%ld",&x,&y,&z);
    printf("Output = %ld\n", problem01(x,y,z));
    return 0;
}