#include <conio.h>
#include <stdio.h>

int main() 
{ 
    int x = 10;
    int *p;
    int **q;
    p = &x;
    q = &p;
    printf("x value is %d\n", x);
    printf("address of x is %u\n", &x);
    printf("The value of p is %u\n", p);
    printf("The address of p is %u", &p);
    printf("The value pointed by pointer p is %d\n", *p);
    printf("The value of q is %u", q);
    printf("The address of q is %u\n", &q);
    printf("The value of x by using pointer to pointer is %d\n", **q);
    return 0; 
}

/*
pointer to pointer je varijabla koja sadrzi adresu drugog pointera
int x = 10;
int * p;
int **q; pointer to pointer; q sadrzi adresu p
q = &p;
p = &x;

%u format specifier unsigned number format kada je pointer to pointer
*/