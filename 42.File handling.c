#include <conio.h>
#include <stdio.h>


int main() 
{ 
    FILE *Fpointer;
    Fpointer = fopen("rados1.txt", "w");

    if(Fpointer == NULL)
    {
        printf("Unable to create the file");
    } else{
        printf("file opened succesfully");
    }
    fclose(Fpointer);

    return 0; 
}

/*
fajlovi su blokovi operativnih sistema, u njima su podaci trajno za razliku od varijabli
stdio.h ima funkcij fopen koja otvara fajlove
fopen("file_name", "mode"-st zelimo da radimo sa fajlom)
"mode"-"r", read;mora izmedju " " jer je to string value
"w" write mode;otvara fajl i brise njegov sadrzaj i daje ga praznog
ako nema fajla onda ce ga napraviti
"a" edit or apend file;fajl ce biti otvoren za izmene;
"r+" reading and writting 
"w+" sadrzaj fajla se gubi a posle se moze read and write
"a+" open for reading and writting, content is saved

"rb", "wb", "ab", "r+b", "w+b", "a+b" working with binary files

stdio ima strukturu FILE i fopen vraca adresu fajla, pa struktura FILE ima sve informacije o fajlu
FILE *Fpointer*/

