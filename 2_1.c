/* программадля подсчёта корней уравнения (дискриминант) */

#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c;
  double D, x1, x2;

  printf("Введите a= "); scanf("%f", &a);
  printf("Введите b= "); scanf("%f", &b);
  printf("Введите c= "); scanf("%f", &c);

  D = b*b-4*a*c;

  if (D > 0) {
    x1 = (-b+sqrt(D))/(2*a);
    x2 = (-b-sqrt(D))/(2*a);

    printf("Уравнение имеет два корня:\n");
    printf("x1 = %lf\n", x1);
    printf("x2 = %lf\n", x2);
  } else if (D == 0) {
    x1 = (-b)/(2*a);

    printf("Уравнение имеет один корень:\n");
    printf("x = %lf\n", x1);
  } else {
    printf("Уравнение не имеет корней.\n");
  }
  return 0;
}

