#include<stdio.h>
#include<conio.h>

int main()
{
    int marks[6] = {35, 45, 65, 75, 85};

    float avg[2];
    avg[0] = 65.5;
    avg[1] = 75.5;

    printf("%d\n", marks[0]);
    printf("%d\n", marks[1]);

    printf("%f\n", avg[1]);

    //marks[0] = 35;
    //marks[1] = 45;moze ovako da se inicijalizuje
    return 0;
}

//array je kolekcija slicnih elemenata-brojevi, karakteri, float...
//stvara se kao varijabla i deklarise tako
//prvo tip podataka kao kod varijable
//moze se ostaviti prazan array prilikom deklaracije i onda naknadno upisati vrednosti
//stampanje:printf("%d\n", marks[1]);
//array uvek pocinje od 0 

