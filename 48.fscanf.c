#include <conio.h>
#include <stdio.h>

int main() 
{ 
    FILE *pf;
    char data [10];
    char name[10];

    pf = fopen("radso1.txt", "r");

    if(pf == NULL)
    {
        printf("Unable to open the file \n");
    }else{
        fscanf(pf, "%s %s", data, name);

        printf("%s %s", data, name);

        fclose(pf);
    }
    return 0; 
}

/*
fscanf cita input iz fajla
scanf daje input sa tastature i tu je razlika

fscanf(file_pointer, "format string", list of address of variables)

fopen ce vratiti adresu fajla koji otvaramo i adresa ce biti sacuvana u pointeru pf
provera uspesnosti otvaranja fajla

kada citamo nesto iz fajla to moramo da sacuvamo u string varijabli
ako ima praznog prostora fscanf ce vratiti samo prve karaktere
za int varijable moramo koristiti &
velicina array stringa mora biti manja od odredjene velicine

*/