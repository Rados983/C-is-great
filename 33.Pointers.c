#include <conio.h>
#include <stdio.h>

int main() 
{ 
    /*int x = 10;
    int * j;
    j = &x;
    printf("The value of x is %d\n", x);
    printf("The address of x is &x is %p\n", &x);
    printf("The value of x is *(&x) %d\n", *(&x));
    printf("The memory cell stored in the pointer j is %p", j);

    printf("The value pointed by the pointer j is %d\n", *j);
    printf("The address of pointer j is %p", &j);
    */

   int a = 10;
   int * b;
   b = &a;
   printf("The address of a is %p\n", b);
   printf("The value of memory cell of a is %d\n", *b);

   printf("%s, Hello");

   printf("%25s, Hello");



    return 0; 
}

/*
kompujter stavlja varijablu u memorijsku celiju sa memorijskom adresom
pointer je varijabla koja sadrzi memorijsku adresu druge varijable u memoriji
& ampersen je operator adrese i ima samo jednu vrednost
* je vrednost operatora i pokazuje vrednost u memorijskoj celiji
pointer se prvo mora definisati
%p je format specifier, koji stampa data tpa void;stampa adresu pointera bilo koje varijable;posto je vrednost adrese integer moze se koristiti i specifier %d ili cak i %f
%p stampa hexadecimalnu lokaciju adrese varijable

format specifier je nacin da kazemo kompajleru koji tip podataka je u varijabli pilikom scanf i printf
koristi se prilikom inputa i outputa
%c character
%d integer
%f float
%g float or double use of %e
%o unsigned octal value
%u int unsigned decimal
%x in unsigned hex value



*/

