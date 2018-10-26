#include <conio.h>
#include <stdio.h>


void display(int, int);

int main() 
{ 
    int a, b;
    a = 10;
    b = 20;
    printf("a is %d and b is %d\n", a, b);

    display(a, b);
    return 0; 
}

void display(int x, int y)
{
    x = 50;
    y = 60;
    printf("in display x is %d and y is %d", x, y);
    
    

}

/*
kako se vrednost prenese na funkciju-pass by 
prototipise se nova funkcija sa oznakama dataype, onda u main funkciji se napisu 2 broja i da im se vrednost
onda se stavi printf u main sa brojevima
nova funckija se dole deklarise i odrede se imena brojnih varijabli ali bez vrednosti
pozove se nova funkcija u main sa imenima varijabli u main kao argumentima
autput su iste vrednosti varijabli  sa razlicitim imenima


vrenosti varijabli u main su kopirane u varijable u pozvanoj funkciji

onda se mogu menjati vres



*/