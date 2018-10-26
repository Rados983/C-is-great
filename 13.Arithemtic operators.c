#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int num1,  num2, result;
    num1 = 10;
    num1++;
    num2 = 3;
    //result = num1 + num2;
    //result = num1 - num2;
    //result = num1 * num2;
    //result = num1 / num2;
    result = num1 % num2;
    printf("%d", result);


    return 0;
}

// + addition, - subtraction, * multiplication, / division, ++ -- increment and decrement, % modulus
// c zaokruzuje rezultat na ceo broj ako ima decimalni ostatak
// npr. num1+=5; increment by 5
