#include <stdio.h>

int main()
{
   float y;
   
   // целочисленное значение игрика , разрядная ссетка при прибавлении шага , строго выполнить не получится 
   // != не может быть (<=)
   
   for (y=0.1; y!=1; y++) printf("выведите число:  %f", y);

    return 0;
}

