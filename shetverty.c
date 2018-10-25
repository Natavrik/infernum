#include <stdio.h>
int main()
{
float x, y;
printf(" введите координаты: \n");
scanf("%f %f ", &x, &y);

if ((x>0) && (y>0))
{
printf(" первая четверть. \n");
}

if ((x<0) && (y>0))
{
printf(" вторая четверть. \n");
}

if ((x<0) && (y<0))
{
printf(" третья четверть. \n");
}

if ((x>0) && (y<0))
{
printf(" четвертая четверть. \n");
}
return 0;
}

