/* программа выводит квадратную матрицу х на х 
и выводит на экран звёздочки (*) 
значение х- вводится пользователем */

#include <stdio.h>
int main()
{
  int i = 1, x;
  printf("x=");
  scanf("%d", &x);
  while (i <= x*x)
    {
      if (i % x == 0)
	printf("*\n");
      else printf("*");
      i++;
    }
  printf("\n");
  return 0;
}
