#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int age;
    float weight;
    printf("Enter your age and weight\n");
    scanf_s("%d %f", &age, &weight);
    printf("Your age is %d\n your weight is %f", age, weight);
    

    return 0;
}

//scanf is from stdio.h and provides input from keyboard
//deals with memory locations
// & means that value given to the int age goes to the int age address