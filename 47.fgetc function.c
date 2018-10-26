#include <conio.h>
#include <stdio.h>

int main() 
{ 
    FILE *pf;
    char ch;

    pf = fopen("radso1.txt", "r");

    if(pf == NULL)
    {
        printf("Unable to open the file \n");
    }else{
        while(!feof(pf)) {
            ch = fgetc(pf);
            printf("%c", ch);
        }
        fclose(pf);
    }

    return 0; 
}

/*
fgetc znaci get character from a file
ch = fgetc(file pointer)
feof je file and of i pokazuje da li je fajl procitan i pokazuje nam, posebno kroz while loop da li je kraj fajla procitan
while(!feof()) ! not operator ce false = null pretvoriti u true


*/