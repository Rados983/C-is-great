#include <conio.h>
#include <stdio.h>

int main() 
{
    FILE *pf;
    char input[25];

    pf = fopen("rados1.txt", "w");

    if(pf == NULL)
    {
        printf("Unable to open the file \n");
    }else{
        printf("Enter a string to write to the file \n");
        gets(input);
        fputs(input, pf);
        printf("Data  has writtern successfully\n");
        fclose(pf);
    }

    return 0; 
}

/*
fputs funkcija i pisanje u fajl
fputs(string, file pointer)
*pf je fajl pointer
adresa fajla ide u fajlo pointer
ovde trazimo od korisnika da unese string koji ce biti upisan u fajl
*/