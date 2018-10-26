#include <conio.h>
#include <stdio.h>

void increment();
void display();

int b = 0;


int main() 
{ 
    int a = 10;
    printf(" from a the value of a is %d\n", a);
    b++;
    increment();
    display();
    return 0; 
}

void increment()
{
    printf("from increment %d\n", b);
}

void display()
{
    int a = 20;
    int b = 30;
    printf("from main the value of  a is %d\n", a);
    printf("from display the value of b is %d", b);
}

/*
variable scope je oblast gde je variabla dostupna
global scope-dostupna svim funkcijama u fajlu
local scope-deklarisana u funkciji unutar {}
global variable se definise van svih funkcija
onda je moguce menjati vrednost varijable u svim funkcijama i dati joj razlicite vrednosti u bilo kojoj funkciji
local scope variables mogu imati ista imena u funkcijama ali su nezavisne-mogu imati razlicite vrednosti



*/