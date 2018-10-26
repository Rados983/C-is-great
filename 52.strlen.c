#include <conio.h>
#include <stdio.h>

int main() 
{ 
    char name[] = {'R', 'a', 'd', 'o', 's', '\0'};
    char lastName[] = {'M', 'i', 'r', 'k', 'o', 'v', 'i', 'c', '\0'};
    int length;
    int length2;
    length = strlen(name);
    length2 = strlen(lastName);
    printf("The length of %s is %d\n", name, length);
    printf("The length of %s string is %d", lastName, length2);




    return 0; 
}

/*
int strlen(string); ima samo 1 parametar
pokazuje duzinu stringa
string se zavrsava sa null character '' da bi kompajler znao da je kraj stringa

char name[] = {'R', 'a', 'd', 'o', 's'};
int length;
length = strlen(name);


*/