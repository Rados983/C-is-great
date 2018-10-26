#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


int main() 
{
    int counter;
    for(counter = 1;counter <= 10;counter++)
    {
        if(counter == 5)
        {
            break;
        }
        printf("%d\n", counter);
    }

    printf("After the for loop\n");
    

    

    return 0; 


}
//koristi se za prekid loopa i prekid funkcije case u switch statament
//break statement ide sa if loop
//ako je loop inside loop onda break samo prekida unutrasnji loop