/*Произведение нечетных чисел до 20 */

#include<stdio.h>

int main()
{
  long int i,d;
  i=1;
  d=1;
  do{i+=2;d*=i;} while(i<=20);
  printf ("Произведение нечетных чисел до 20= %ld\n",d);
  return 0;
}
