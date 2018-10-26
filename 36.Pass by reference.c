#include <conio.h>
#include <stdio.h>


void display(int *, int *);


int main() 
{ 
    int x, y;
    x = 300;
    y = 400;

    printf("Before function call x is %d and y is %d\n", x, y);

    display(&x, &y);

    printf("After function call x is %d and y is %d\n", x, y);
    return 0; 
}

void display(int *p, int *q)
{
    printf("%d\t %d\n", *p, *q);
    *p = 10;
    *q = 20;
}

/*
kako se adresa varijable prenosi funkciji
naprave se 2 varijable i onda se napravi funkcija koja ce pokazati adrese
nova funkcija mora imati argumente sa * 
u novoj funkciji se odrede pointeri i napise se printf koji referira pointere nove funkcije
u main se pozove nova funkcija sa tim da ukazuje da adrese varijabli main funkcije

output su vrednosti adresa
mogu se menjati vrednosti adresa i u tom slucaju printf ide posle pozivanja funkcije 



*/