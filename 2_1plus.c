/* выводит зачёт / незачёт  */

#include <stdio.h>
int main()
{
  float x;
  printf("Введите оценку за зачет:");
  scanf("%f",&x);
  if (x >= 2.5)
    printf("Поздравляю, Вы сдали зачет!\n");
  else
    printf("К сожалению, нужно повторить!\n");
  return 0;
}
