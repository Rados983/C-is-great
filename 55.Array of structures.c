#include<stdio.h>
#include<conio.h>

struct student{
    char name[15];
    int rollno;
};


int main()
{
    int size = 3;

    struct student s[size];
    int counter;

    for(counter = 0;counter < size;counter++)
    {
        printf("Enter the name and roll nmber of student %d\n", counter+1);
        scanf_s("%s%d", &s[counter].name, &s[counter].rollno);
        printf("\n\n");
    }

    for(counter = 0;counter < size;counter++)
    {
        printf("name %s\t rollno %d\n", s[counter].name, s[counter].rollno);
    }

    return 0;
}

/*
za skladistenje mnogo varijabli
array of struct se stvara u main
struct student s[100-koliko studenata]

int size = 3;
struct student s[size];
int counter;
for (counter = 0;counter < size;counter++ )
{
    printf("Enter the name and roll number of student %d", counter+1);
    scanf("%s%d", s[counter].name, &s[counter].rollno);
}

for(cpunter = 0;counter < size;counter++)
{
    printf("name %s\t rollno %d\n", s[counter].name)
}
ovo je za vise studenata
& ide jer je u pitanju brojna vrednost
procitane vrednosti ce biti upisane u array s

*/