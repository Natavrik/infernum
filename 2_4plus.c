#include<stdio.h>

int main()
{
 double num,sum;
 num = sum = 0;
 int i;
 i = 0;
 while(i < 4){
  printf("введите число: ");
  scanf("%lf",&num);
  sum+=num;
  ++i;
 }
 while(sum - (int) sum != 0)
  sum*=10;
 printf("последняя цифра суммы :> %d\n", (int)sum%10);
 return 0;
}
