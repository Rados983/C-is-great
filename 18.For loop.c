#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


int main() 
{
    int counter;
    for(counter = 1;counter <= 10;counter++)
    {
        printf("%d\n", counter);
    } 
    
    

    printf("******************************\n");

    /*int i = 1;
    for(; ; )
    {
        printf("%d\n", i);
        if(i == 5)
        
            break;
        
    }*/

    int a;
    int b;
    for(a = 5, b = 10;(a <= 5) && (b <= 10);a++, b++)
    {
        printf("%d%d\n", a, b);

    }

    return 0; 



}

//koristi se za slicne funkcije kao i while loop
//u jednoj liniji koda se vrsi inicijalizacija expresije, provera uslova i incremen
//moze vise varijabli da se proveri kroz for loop ali kod srednjeg dela ide samo jedan statement
// u c ; je jednako while loop
