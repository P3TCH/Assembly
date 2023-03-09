#include<stdio.h>

long exercise4(long a);

int main(){
    long x;
    printf("Enter two integers : ");
    scanf("%ld",&x);
    printf("Output = %ld\n", exercise4(x));
    return 0;
}