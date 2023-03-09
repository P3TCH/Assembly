#include<stdio.h>

long exercise3(long a , long b );

int main(){
    long x,y;
    printf("Enter two integers : ");
    scanf("%ld%ld",&x,&y);
    printf("Output = %ld\n", exercise3(x,y));
    return 0;
}