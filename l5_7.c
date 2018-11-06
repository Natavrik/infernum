#include <stdio.h>
int invers(int q)
{
    int Num=0;
    while(q!=0)
    {
        Num=(q%10)+(Num*10);
        q/=10;
    }
    return Num;
}

int inversVush(int q, int w)
{
    int T=q-w,Fin=0;
    while(T!=0)
    {
        Fin=(T%10)+(Fin*10);
        T/=10;
    }
    return Fin;
}

int main ()
{
    int q,w,Fin;
    printf("Число\n");
    scanf("%d",&q);
    w=invers(q);
    Fin=inversVush(q,w);
    printf("Перевертышь перевертыша %d\n",Fin);


    return 0;
}

