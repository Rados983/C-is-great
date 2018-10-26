#include <conio.h>
#include <stdio.h>


void display(int marks[], int size)
{
    int counter;
    for(counter = 0;counter < size;counter++)
    {
        printf("The array element at %d is %d\n", counter, marks[counter]);
    }

    //printf("The mark received is %d", marks);
}

int main() 
{ 
    int marks[3] = {35, 45, 55};
   //display(marks[0]);
   display(marks, 3);
    return 0; 
}

/*
broj se pozove u novoj funkciji i kada se funkcija poziva u funkciji main pozove se broj i lokacija u nizu


*/