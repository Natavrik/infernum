/* программа выводит все числа в порядковом виде 
одно за другим вплоть до любого числа 
(в данном случае до 99)*/

#include <stdio.h>
int main()
{
  int i = 1;
  while (i <= 99)
    {
      if (i%3==0)
	printf("%d\n", i);
      else
	printf("%d ", i);
      i++;
    }
  return 0;
}
