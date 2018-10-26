#include <conio.h>
#include <stdio.h>

struct student {
  char name[15];
  int rollno;
  int age;
};

int main() 
{
    struct student anil = {
        "anil", 
        1234,
        23
    }; 

    //anil.name;

    printf("%s %d %d", anil.name, anil.rollno, anil.age);
    
    
    return 0; 
}


/*
ukoliko koristimo razliite tipove podataka
student:licni podaci, ocene itd.
kombinuje razlicite tipove podataka

struct tag_name-struct name{
    member 1;
    member 2;
};

upisuju se atributi npr. studenta

struct se deklarise izvan main funkcije

. operator after struct name

struct je kolekcija neslicnih data elemenata data type

vrednost varijabli structa se odredjuje u main funkciji


*/