/*программа для уравнения*/

#include<stdio.h>

int main()
{
  int k,N;
    float P=1;
    printf("Введите число N = ");
    scanf("%d",&N);
    for(k=1;k<=N;k++)
      P*=(float)1/k+(float)(k+1)/(k+2);
    printf("P=%f\n",P);
    return 0;
}
