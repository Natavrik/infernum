#include <stdio.h>
long int Fib (long int);
long int Fib (long int n)

{
    if ( n==0 ) 
    return 0;
    else if (n==1)
    return 1;
    else
    return Fib (n-1) + Fib (n-2);

}

int main ()
 
 {
     long int a;
     printf("n=");
     scanf("%ld", &a);
     printf("Fib(%ld)=%ld\n", a, Fib (a));
     return 0;
 }