#include <conio.h>
#include <stdio.h>


int add(int, int);

int main() 
{ 
    int result;
    result = add(10, 20);
    return 0; 
}

int add(int a, int b)
{
    int temp;
    temp = a + b;

    if(temp < 0)
    {
        return 0;
    } else {
      return temp;
    }
}

/*
rezultat vraca return vrednost u funkciji koju pozivamo
samo jedno return se izvrsava
mozemo staviti u if else petlju da ako je rezultat manji ili veci od 0 da onda vrati temp ili 0

*/