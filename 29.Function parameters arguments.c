#include <conio.h>
#include <stdio.h>


void add();

int main() 
{ 
    int num1 = 100;
    int num2 = 200;
    add(num1, num2);
    return 0; 
}

void add(int a, int b)
{
    int result = a + b;
    printf("The result of %d and %d is %d", a, b, result);



}

/*
kako mozemo preneti parametre u funkcije 
u prototipisanju:unutar () idu pramtetri npr. int a, int b
odredjujemo koliko parametara funckija ima
ne moramo dati imena parametrima samo datatype i koliko ih ima  za svaki datatype
vrednost parametara se moze deklarisati unutar same funkcije ili prilikom pozivanja u  main funkciji
takodje se parametri druge funkcije mogu pozvati vise puta u main funkciji i dati im se druge vrednosti
takodje se mogu napravti varijable u main i pozvati kao parametri u funkciji koju pozivamo u main






*/