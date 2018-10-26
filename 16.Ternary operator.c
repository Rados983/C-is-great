#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main()
{
    int age = 23;
    int x;
    //age >= 18 ? printf("You are adult") : printf("You are minor");

    x = age >= 18 ? 1 : 0;
    printf("%d", x);



    return 0;
}

//alternate for if and else
//expression 1 ? expression 2 : expression 3;
//if expression 1 is true, than expression 2 is evaluated and becomes value of whole statement
//if expression 1 is false, than expression 3 is evaluated and becomes value of whole expression

