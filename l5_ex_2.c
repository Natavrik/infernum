#include <stdio.h>
long int Fact (long int);
long int Fact (long int n)

{
    if ( n==0 )
    return 1;

    else 
    return n*Fact (n-1);
}

int main ()
{
    long int a;
    printf("n= ");
    scanf("%ld", &a);
    printf("n! = %ld\n", Fact (a));
    return 0;
}