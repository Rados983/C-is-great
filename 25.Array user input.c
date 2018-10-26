#include<stdio.h>
#include<conio.h>

int main()
{
    int size = 6;
    int marks[size];
    int counter;

    for(counter = 0;counter < size;counter++)
    {
        scanf_s("%d", &marks[counter]);
    }

    for(counter = 0;counter < size;counter++)
    {
        printf("the element at %d is %d \n", counter, marks[counter]);
    }
    return 0;
}

//kako mozemo da za usera dobijemo podatke iz array i stavimo u for loop
/*

int size = 6;
int marks[size];
int counter;

for(counter = 0;counter < size; counter++)
{
    scanf("%d", &marks[counter]);
}
for(counter = 0;counter < size<counter++)
{
    printf("the element at %d is %d\n", counter, marks[counter]);

}

ovde su 3 broja provuceni kroz 2 for loopa
for loop uzima citanje iz array i onda nam odstampa

*/