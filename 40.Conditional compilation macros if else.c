#include <conio.h>
#include <stdio.h>

#define MARK 95

int main() 
{
    #if MARK >= 75
    printf("Your marks are greater than 75 \n");
    printf("You have got the grade A \n");

    #elif MARK >= 50
    printf("Your marks are greater than 50 and less than 75 \n");
    printf("You have got the grade B \n");

    #else 
    printf("Your marks are less \n");

printf("You have got the grade C");

    #endif 
    return 0; 
}

/*
uslovne kompilacijske direktive omogucavaju da se selektivno kompajliraju delovi izvornog koda
# if
#else
#elif
#endif

omogucavaju da koristimo delove koda na osnovu unapred odredjenog rezultata


*/