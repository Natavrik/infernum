/*Определение знака зодиака*/

#include<stdio.h>

int main()
{
  int M, D;
  printf("Введите день рождения: ");
  scanf("%d", &D);
  printf("Введите месяц рождения:");
  scanf("%d", &M);

  if ((D>=20 && M==1) || (D<=18 && M==2))
    printf("Вы-ВОДОЛЕЙ \n");

  else if ((D>=19 && M==2) || (D<=20 && M==3))
    printf("Вы - РЫБЫ \n");

  else if ((D>=21 && M==3) || (D<=19 && M==4))
    printf("Вы -ОВЕН \n ");

  else if ((D>=20 && M==4) || (D<=20 && M==5))
    printf("Вы -ТЕЛЕЦ \n");

  else if ((D>=21 && M==5) || (D<=21 && M==6))
    printf("Вы - БЛИЗНЕЦЫ \n");

  else if ((D>=22 && M==6) || (D<=22 && M==7))
    printf("Вы - РАК \n");

  else if ((D>=23 && M==7) || (D<=22 && M==8))
    printf("Вы - ЛЕВ \n");

  else if ((D>=23 && M==8) || (D<=22 && M==9))
    printf("Вы - ДЕВА \n");

  else if ((D>=23 && M==9) || (D<=22 && M==10))
    printf ("Вы - ВЕСЫ \n");

  else if ((D>=23 && M==10) || (D<=22 && M==11))
    printf ("Вы - СКОРПИОН \n");

  else if ((D>=23 && M==11) || (D<=21 && M==12))
    printf("Вы - СТРЕЛЕЦ \n");

  else if ((D>=22 && M==12) || (D<=19 && M==1))
    printf("Вы - КОЗЕРОГ \n");
  return 0;
}
