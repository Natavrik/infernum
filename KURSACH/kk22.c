#include <stdio.h>
#include <math.h> 
#define DELTA 1e-2 

double f(double);

double root (double, double);

double derivative (double );

int main (){

double x, epsilon, xn;
printf ("Введите аргумент: "); 

scanf ("%lf", &x);
printf ("введите точность: ");


scanf ("%lf", &epsilon);

printf ("%lf\n", root (x, epsilon));

return 0;
}




double f(double x) {

return sin(2*x)-0.7;
}

double root (double x, double epsilon) {

double x1;

do{

	do{

	x1 = x;

	x = x-(f(x)/derivative(x));
	}
           
	while(fabs(f(x))>=epsilon);
           
	epsilon *= 0.01;
    }while(f(x)*f(x1)<0);

return x;
}

double derivative (double x){

return (f(x+DELTA)-f(x))/DELTA;
}
