#include <conio.h>
#include <stdio.h>

void function1();
void function2();

int main() 
{
    printf("In main function\n");
    printf("Calling function 1\n");
    function1();
    printf("In main function after returning from function1\n");
    printf("finishing main function\n");

    return 0; 
}

void function1()
{
    printf("In function1\n");
    printf("Calling function1\n");
    function2();
    printf("In function1 after returning from function2 \n");
    printf("Returning from functon1 \n");
}

void function2()
{
    printf("In function2 \n");
    printf("returning from function2\n");

}

/*
kako mozemo pozvati jednu funckiju iz druge funkcije i kako mozemo premestiti kontrole
kada pozovemo fnkc 1 onda zove pozivaca-caller i onda ide prema pozvanoj funkciji-called
prvo ce biti izvrsen poziv pa onda preostali kod ako ga ima i na kraju se vraca funckiji koja sve poziva-caller

*/