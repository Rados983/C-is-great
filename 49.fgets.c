#include <conio.h>
#include <stdio.h>

int main() 
{ 
    FILE *pf; //radimo sa fajlom 
    char data[15];//varijabla niz u koji cemo sacuvati dobijene podatke i njegova duzina

    pf = fopen("radso1.txt", "r");//fajl na koji pointer upucuje

    if(pf == NULL) //provera ucitanosti fajla
    {
        printf("Unable to open the file \n");
    }else{
        while (! feof(pf)) 
        {
            fgets(data, 15, pf);
            printf("The characters readed were %s\n", data);
        }
         fclose(pf);
    }

    return 0; 
}

/*
fgets da bi se dobio string od fajla
fgets(variable_to_store, length, file_pointer);
fscanf funkcija ne daje limit velicini stringa

fgets smatra daje prazan prostor deo stringa



*/