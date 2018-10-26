#include<stdio.h>
#include<conio.h>

int main()
{
    int number = 1;
    switch(number)
    {
        case 1:
        printf("One\n");
        break;

        case 2:
        printf("Two\n");
        break;

        case 3:
        printf("Three\n");
        break;

        default:
        printf("Default\n");

    }

    
    return 0;
}

//kada ima mnogo opcija zavisno od inputa onda se koristi switch
//switch expression, i unutar {} idu case i statement
//ako zelimo da samo jedan case bude izvrsen onda se koristi statement break ispod svakog case
//break nije obavezan za default case
//poredak case nije uslovljen