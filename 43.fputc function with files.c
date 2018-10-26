#include <conio.h>
#include <stdio.h>
#include<string.h>

int main() 
{
    FILE *Fpointer;
    char data[40] = "Rados Mirkovic is a programmer";
    int length = strlen(data);
    int counter;

    Fpointer = fopen ("rados1.txt", "a");

    if(Fpointer == NULL)
    {
        printf("Unable to create or open the file");
    } else{
        for(counter = 0;counter < length;counter++)
        {
            printf("Writting the character %c \n", data[counter]);
            fputc (data[counter], Fpointer);
        }
        printf("data written to the file successfully");
        fclose(Fpointer);
    }

    return 0; 
}

/*
kako mozemo pisati karaktere u fajl 
kako da za to koristimo fputc funkciju za to
mora postojati path u definisanju macro like funkcije
pisanje u fajl:napravi se array karaktera koji zelimo da upisemo i onda sa inicijaliziju kroz for loop


*/