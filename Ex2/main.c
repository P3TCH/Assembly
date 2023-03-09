#include<stdio.h>

long exercise2(long a , long b , long c);

int main(){
    long x,y,z;
    printf("Enter three integers : ");
    scanf("%ld%ld%ld",&x,&y,&z);
    printf("Output = %ld\n", exercise2(x,y,z));
    return 0;
}