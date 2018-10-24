/*Факториал числа */

#include<stdio.h>
int main()
{
  int q,i,NN=1;
  printf("Введите число\n");
  scanf("%d",&q);
  for(i=1;i<=q;i++)
    {
      NN*=i;
    }
  printf("Факториал числа = %d\n",NN);
  return 0;
}
