#include <conio.h>
#include <stdio.h>


int main() 
{ 
    int broj[4] = {1, 2, 3, 4};
    printf("%d\n", broj[1]);

    char name[] = "Rados";
    char surName[] = "Mirkovic";

    printf("%s\t", name);
    printf("%s", surName);




    return 0; 
}

/*
string je character array
tip, ime, [broj] {karakteri, ali moraju biti u ''}
stampanje uz %c ili %s za slova i reci
string se u c zavrsava sa 0 value i moze se dodati \0 da se ne bi stampala

druga inicijalizacija:char surName[] = "Mirkovic"; i ovde se moze svaki element posebno stampati:surName[0];
samo stampanje teksta:printf("%s", name);


*/