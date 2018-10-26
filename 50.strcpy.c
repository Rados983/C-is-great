#include <conio.h>
#include <stdio.h>

int main() 
{
    char source [] = "Rados Mirkovic";
    char target[25];
    strcpy_s(target, source);
    printf("%s", source);
    printf("%s", target); 
    return 0; 
}

/*
strcpy is string copy
kada kopiramo string iz jednog izvora na drugu destinaciju
odredimo izvor
odredimo target string;oba su varijable
stringovi se kopiraju preko strcpy funkcije

strcpy (target, source);
printf("%s", sorce);
printf("%s", target);

strcpy kopira karakter po karakter dok ne dodje no 0 karaktera




*/