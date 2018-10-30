#include <stdio.h>
#include <math.h>

int kvadrat_chisla(int a)
{
    float b;
    int w;
    b = sqrt(a);
    w=b;
    if(w==b)
    	return w;
    else
    	return 0;
}


int main ()
{
	int a, b; 
	printf("Заданное число: \n"); scanf("%d", &a);
    b= kvadrat_chisla(a);
    if(b==0)
    	printf("Нет \n");
    else
        printf("есть\n");
	return 0;
}
 
