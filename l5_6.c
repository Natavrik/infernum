#include <stdio.h>
int prost (int x)
{
    int i,q,w=0;
    for(i=1;i<1001;i++)
    {
        for(q=2;q<1001;q++)
        {
            if(x%q!=0  &&  q!=x)
            {
                w=1;
            }
            if(i%q!=0  &&  i!=q)
            {
                printf("%d ",i);
            }
            else
            {
                
            }
        }
    }
    if(w==1)
    {
    return 1;
    }
    else
    {
    return 0;
    }
}

int main ()

{
    int a,x; 
    printf("введите число а и проверьте его на простоту: ");
    scanf("%d", &a);
    x=prost(a);
    if(x==1)
    {
        printf("Число простое %d\n", a);
    }else{
        printf("Составное\n");
    }
    return 0;
}