#include <stdio.h>
void a (void);
void b (void);
void c (void);

int x=1; 

int main ()
{ 
    int x=2 ;
    printf("%d\n", x);

    {
        int x=3;
        printf("%d\n", x);
    }
        printf("%d\n", x);

        a(); b(); c();
        a(); b(); c();

    return 0;
}

void a(void)

{
    int x=4;
    printf("%d\n", x);
    x++;
    printf("%d\n", x);
}

void b (void)
{
    static int x=5;
    printf("%d\n", x);
    x++;
    printf("%d\n", x);
}

void c (void)
{
    printf("%d\n", x);
    x++;
    printf("%d\n", x);
}