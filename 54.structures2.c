#include <conio.h>
#include <stdio.h>

struct student{
    char name[15];
    int rollno;
    int age;

}anil, ajay, akshay;//mogu se  i ovde definisati varijable structa


int main() 
{
    //struct studetn nikhil, shashank; moze i ovako 
    //struct student shashank = {0}; ako uradimo ovo onda ce sve varijable structa biti pod brojevima, odnosno u 
    //u slucaju ako je 0 nece imati nikakvu vrednost
    
    struct student anil = {
        "anil",
        1234,
        23,
    };

    struct student ajay = {
        "ajay",
        12345,
        15
    };


    struct student akshay = {
        "akshay",
        3456,
        14
    };

    printf("%s", akshay.name);

    struct student nikhil;
    nikhil = akshay;
    printf("%s\n%s", akshay.name, nikhil.name);
    return 0; 
}

/*
razliciti nacini stvaranja varijabli struct 
kako kopirati vrednosti varijabli iz jednog structa u drugi

ako zelimo da kopiramo vrednosti varijabli jednog structa u drugi to se radi ovako:
struct student shashank;
shashank = nikhil;
printf("%s\n%s", nikhil.name, shashank.name);

strcpy(shashank.name, nikhil.name);
puts(shashank.name);ako hocemo da kopiramo samo pojedinacne vrednosti varijabli iz jednog structa u drugi





*/