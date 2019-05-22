#include <stdio.h> 

#include <math.h>  

#define DELTA 1e-2

double f(double, double, double ); 
 
double root (double, double, double, double ); 

double derivative (double, double, double ); 

int main (){ 

double x, epsilon, c, d;


double x1, x2;
printf("Введите интервал(x2 и x1): "); 
scanf("%lf %lf", &x1, &x2);


printf ("введите точность: "); 

scanf ("%lf", &epsilon); 

printf ("Введите с-угол наклона: ");
scanf("%lf",&c);

printf ("Введите d:  ");
scanf("%lf",&d);

printf ("%lf\n", root (x, epsilon,c,d)); 

return 0; 
} 



double f (double x, double c, double d) { 
return sin(c*x)-d; 
}

 
   
// объявление функции root - считает корень 
double root (double x, double epsilon, double c, double d) { 

double x1; 

int k=0;

do{ 
 
 do{ 
  
 x1 = x; 
 // присваиваем переменной х выражение последовательное приближение х корня 
 
 x = x1 - f(x1,c,d) * ((x1-x2)\(f(x1,c,d) - f(x2,c,d)));
 	k++;

 	printf("%d)x=%lf f(x)=%.10lf\n",k,x,f(x,c,d));
 } 
 // пока абсолютное значение функции от аргумента х >= epsilon 
 while(fabs(f(x,c,d))>=epsilon); 
 
 epsilon *= 0.01; 
 }while(f(x,c,d)*f(x1,c,d)<0); 

return x; 
} 
