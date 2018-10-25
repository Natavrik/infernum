/* программа, которая выводит звёздочками треугольник с высотой 7 звёздочек */

#include<stdio.h>
int main()
{
  int i,f;
  i=0;
  f=1;
 while( f < 8 ){
   if( i == f){
     printf("\n");
     i=0;
     ++f;
   }
   if(f <= 7){
     printf("*");
   }
   ++i;
 }
 f=6;
 i=0;
 while( f != 0 ){
   if ( i == f){
     printf("\n");
     i=0;
     --f;
   }
   if ( f > 0) {
     printf("*");
   }
   ++i;
 }
  return 0;
}
