#include <conio.h>
#include <stdio.h>

int main() 
{ 
    FILE *pf;
    char name[25];
    int age;
    printf("Enter your name and age\n");
    scanf("%s%d", name, &age);

    pf = fopen("radso1.txt", "a");

    if(pf == NULL)
    {
        printf("Unable to open the file\n");
    }else{
        fprintf(pf, "%s\t%d\n", name, age);
        printf("data written successfully\n");
        fclose(pf);
    }
    return 0; 
}

/*
fprintf pise u fajl na formatted way
takodje ako hocemo da pisemo brojeve na formatted way

fprintf(file_pointer, "format specifier, list of variables");

format specifier formatira output

metodika:
fajl pointer ukazuje na fajl
otvorimo fajl pomocu fopen i fajl pointera
if statement proverava da li je fajl otvoren

da bismo pisali nesto u fajl to radimo pomocu varijabli koje nose vrednosti koje upisujemo
fclose mora imati pointer kojim pokazujemo koji fajl zatvaramo

*/