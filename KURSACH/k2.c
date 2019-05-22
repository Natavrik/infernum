#include <stdio.h> 
 
#include <math.h> 

#define DELTA 1e-2 


double f(double, double, double ); 

double root (double, double, double, double ); 

double derivative (double, double, double ); 



            int main (){ 

            double x, epsilon, xn, c, d;
            printf ("Введите аргумент: "); 

            scanf ("%lf", &x); 
            printf ("введите точность: "); 

            scanf ("%lf", &epsilon); 

            printf ("Введите с: ");
            scanf("%lf",&c);

            printf ("Введите d: ");
            scanf("%lf",&d);

            printf ("%lf\n", root (x, epsilon,c,d)); 

            return 0; 
            } 



double f (double x, double c, double d) { 

return sin(c*x)-d; 
}




            double root (double x, double epsilon, double c, double d) { 

            double x1; 

            do{ 

            do{ 

            x1 = x; 

            x = x-(f(x,c,d)/derivative(x,c,d)); 
            } 

            while(fabs(f(x,c,d))>=epsilon); 

            epsilon *= 0.01; 
            }while(f(x,c,d)*f(x1,c,d)<0); 

            return x; 
            } 


double derivative (double x, double c, double d)
{ 
return (f(x+DELTA,c,d)-f(x,c,d))/DELTA; 
}
