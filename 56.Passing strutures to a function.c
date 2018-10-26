#include <conio.h>
#include <stdio.h>
#include <string.h>


struct student{
    char name[15];
    int rollno;
};

void display(char [], int);
void show(struct student);

int main() 
{
    struct student anil;
    strcpy (anil.name, "anil");
    anil.rollno = 1234;

    display(anil.name, anil.rollno);
    show(anil); 
    return 0; 
}

void display(char n[], int r)
{
    printf("In display function\n");
    printf("%s\t%d\n", n, r);
}

void show(struct student s)
{
  printf("\nIn show function\n");
  printf("%s\t%d\n", s.name, s.rollno);
}

/*
kako mozemo preneti element structure variable funkciji
kako  mozemo preneti ceo struct funkciji



*/