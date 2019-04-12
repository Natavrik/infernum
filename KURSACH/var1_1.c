#include <stdio.h>
#include <math.h>
const int n=50;

int main ()
  {
  int chislitel[n], znamenatel[n], chl_drobi[n], kolichestvo=0;

    printf("Введите числитель: \n");
    scanf("%d", &(chislitel[0]));
    printf("Введите знаменатель: \n");
    scanf("%d", &(znamenatel[0]));
    printf("    Члены дроби:  \n")
    printf(" [ ");

      for (int i=0; i<n; i++)
        {
          if (znamenatel[i]==0)
            {
            printf("] \n");
            break;
            }

              else
                {
                chl_drobi[i]=chislitel[i]/znamenatel[i];
                kolichestvo++;
                printf ("%d ", chl_drobi[i]);

                znamenatel[i+1]=chislitel[i] - znamenatel[i] * chl_drobi[i];
                chislitel[i+1]=znamenatel[i];
                }
        }
      printf("Количество членов дроби = %d",kolichestvo);
  return 0;
  }
