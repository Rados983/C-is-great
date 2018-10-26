#include <conio.h>
#include <stdio.h>

void display();


int main() 
{
    display();
    display();
    display();
    display();

    return 0; 
}

void display()
{
    printf("This is printed with finction\n");
}


/*
funckija je kolekcija statementa koja ce izvrsiti neki zadatak
svaki c program je kolekcija funckija
 
 definisanje:
 return type-vrednost, ime funckije, (parametri)
 {
     telo funckije
 }

 ako funkcija ne vraca vrednost onda je void
 pre pozivanja se vrsi prototipisanje funkcije iznad main funckije i to bez parametara
 deklarisanje funkcije se vrsi ispod main funckije
 pozivanje se vrsi unutar main funkcije i mogu se upisati parametri


 prototipisanje funkcije:
 informisanje kompajlera o novoj funckiji i da ce biti deklarisana i pozvana u source codu
 bez prototipisanja kompajler misli da je nedefinisana i izbacuje gresku
 kod prototipisanja funckija mora imati ; na kraju kao i varijabla


 funckija se moze mnogo puta pozvati unutar main funckije
 main se takodje moze pozvati iz drugih funckije
 kod pozivanja funkcija mora imati na kraju ;

 funckije strukturisu kod kao moduli 
 funksije omogucavaju  da se kod koristi vise puta bez ponovnog pisanja

*/