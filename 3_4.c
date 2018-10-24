/* программа суммирует все цифры 
введённого пользователем числа*/

#include <stdio.h>
int main ()
{
  int Sum,N,LN;
  Sum = 0;
  LN = 0;
  scanf("%d",&N);

  while(N != 0)
    {
      LN=N%10;
      N=N/10;
      Sum=Sum+LN;
    }
  printf("%d\n",Sum);
  return 0;
}

