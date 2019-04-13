#include <stdio.h> 
#include <math.h> 
 
int main () 
 { 
 double x, y, b=0; 
 int i, n, k=0; 
 
 printf ("Введите аргумент тангенса (x): "); scanf ("%lf", &x); 
 printf ("Задайте точность вычислений : "); scanf ("%d", &n); 
 printf (" Члены дроби:\n ________\n\n"); 
 
 for (i=0; i<n; i++) 
    { 
       b += ((i*2)+1)/x; 
       printf ("%.*lf\n", n, b); 
    } 
       y = 1/b;
       
 printf(" ________ \n"); 
 printf("При Вашей точности ---> %d\n\n", n);
 printf("tg (x) = %.*lf", n, y);
 
 return 0; 
 }
