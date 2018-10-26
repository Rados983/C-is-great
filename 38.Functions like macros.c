#include <stdio.h>
#include <conio.h>

#define CHECK(number) if (number >= 10) { \
                       printf("The number is greater than 10"); \
                       }else{     \
                       printf("The number is less than 10");\
                       }


int main()
{
    CHECK(6);

    return 0;
}

/*
macro je vrsta templatea
macro moze imati argumente
definisanje macro se ne zavrsava sa ;
macro deluje kao funkcija 
ne sme biti prostora izmedju imena i argumenta function like macro
falio \ posle poslednjeg printf
*/