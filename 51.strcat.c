#include <conio.h>
#include <stdio.h>

int main() 
{ 
    char surName [] = "Mirkovic";
    char fullName [25] = "Rados";

    strcat(fullName, surName);
    printf("%s\t", surName);
    printf("%s\t", fullName);
    return 0; 
}

/*
strcat(target, source); string concatination, spaja stringove



*/