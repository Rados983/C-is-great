#include <conio.h>
#include <stdio.h>

int main() 
{
    char name[20];
    gets(name);
    //scanf("%s", name);
    printf("%s", name); 
    return 0; 
}

/*
gets nam daje string value from keyboard
zato se string value mora staviti u string array
gets(gde je stavljamo, u koji array)
scanf funkcija tumaci razmak kao dve varijable
gets funkcija moze da pise i izvan array-a ako treba
funkcija gets ima vise mogucnosti od scanf funkcije



*/