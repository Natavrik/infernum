//для ВЫБОРОВ 
// подсчет голосов
// проблема только в том, что один и тот же человек может проголосовать несколько раз, а так быть не должно. Как поставить ограничение, что бы номера студ билетов не совпадали?

#include <stdio.h>
int main()
{
int sum_a = 0, sum_b = 0, cycle1 = 1, cycle2 = 1, n_stud, number;

while (cycle1 == 1)
{
if (cycle2 == 1)
{
printf("Выберите номер кандидата, за которого хотите проголосовать. \n\n(1) - кандидат_а\n(2) - кандидат_b\n\n Для администатора:\n(3) - подсчитать голоса избирателей\n(4) - закончить подсчет голосов\n\n");
scanf("%d", &number);
switch (number)
{
case 1:
printf("Введите номер своего студенческого билета: ");
scanf("%d", &n_stud);
sum_a += 1;
printf("кол-во голосов за кандидата (1): %d\n\n\n\n", sum_a); 
break;

case 2:
printf("Введите номер своего студенческого билета: ");
scanf("%d", &n_stud);
sum_b += 1;
printf("кол-во голосов за кандидата (2): %d\n\n\n\n", sum_b); 
break;

case 3:
printf("количество голосов за кандидата (1): %d\n", sum_a);
printf("количество голосов за кондидата (2): %d\n", sum_b);

case 4:
(cycle1 -= 1);
break;
default:
printf("Неккоректно введен номер выбора кандидата.\n");
}
}
}
return 0;
} 

