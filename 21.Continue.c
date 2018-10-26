#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    for(a = 1;a <= 10;a++)
    {
        if((a % 2) == 0)
        {
            continue;
        }
        printf("%d\n", a);
    
    }
    
    return 0;
}

//koristi se ako smo u while, do while ili for loop ako zelimo da preskocimo sve i da se vratimo na pocetak
