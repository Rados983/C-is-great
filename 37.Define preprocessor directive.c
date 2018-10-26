#include <conio.h>
#include <stdio.h>

#define LIMIT 10 //ovo pokazuje koliko puta for loop ide
#define TOP (LIMIT+1) 
#define NAME "rados mirkovic" //definisanje stringa i zamenice ime sa vrednoscu


int main() 
{
    int counter;
    printf(NAME);
    for(counter = 1;counter <= TOP;counter++)
    {
        printf("%d\n", counter);//kada nadje macro name-LIMIT, onda ce ga zameniti sa vrednoscu 10

    } 
    return 0; 
}

/*
prpreprocesssor je kod koji prvobitno obradi kod pre nego sto ode kompajleru
ima direktive-makro ekspanzije koje stvaraju identifajere koje koristimo u programu i ukljucujemo fajlove
dodatne kompilacije
#include je direktiva

sintaksa definisane direktive:
#define macro_name character sequence; macro je identifier koji se koristi u programu;char_sequence je zamenjen kada se koristi macro
definisano macro ime se moze koristiti u drugim macroima
macroi se koriste ako imamo delove koda koji se koriste vise puta u kodu i cini da kod bde brzi


*/