#include <conio.h>
#include <stdio.h>


struct student{
    char name[15];
    int rollno;
};


int main() 
{
    struct student anil;
    struct student *ptr;

    strcpy(anil.name, "anil");
    anil.rollno = 1234;

    ptr = &anil;

    printf("%s\t%d\n", anil.name, anil.rollno);
    printf("%s\t%d", ptr->name, ptr->rollno); 
    return 0; 
}

/*
pointer za struct variable

napravi se struct 
u main se napravi varijabla za struct sa imenom
napravi  se ista varijabla kao prethodna ali se zavrsava sa pointerom
strcpy(u zagradi koji struct ukazujemo i njegov atribut, vrednost atributa)
odredjivanje vrednosti brojcanog atributa u struct

kada preuzimamo vrednosti structa preko .operatora, levi operand je ime structa
ptr da se pristupi vrednostima u structu, ali ne mozemo koristiti .operator jer je ptr pointer a ne struct variable
-> arrow operator je slican .operatoru i daje pristup clanu structa pomocu pointera
ptr->name, ptr->rollno


*/