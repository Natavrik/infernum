#include <stdio.h>

int SN(int a)
{
	int b=0;
	while (a != 0)
	{
		a /=10;
		b++;
	}
	return b;
}	

int main ()
{
	int a,b;
	printf("Задайте число:\n"); scanf("%d", &a);
    b=SN(a);
    printf("Выводим количество цифр в числе а: %d\n", b);
    
	return 0;
}
