/*опредение погоды*/

#include <stdio.h>

int main()
{
  float t;
  printf("Введите температуру на улице: ");
  scanf("%f", &t);
  if (t < 0)
    printf("\n Морозно!\n");
  else
    if (t>=0 && t<10)
      printf("\n Прохладно\n");
    else
      if (t>=10 && t<20)
        printf("\n Нормально\n");
      else
	printf("\n Жарко\n");
  return 0;
}
