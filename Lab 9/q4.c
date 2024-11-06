/*Write a C program with a user-defined function calculate to perform basic arithmetic operationssuch as addition, subtraction, multiplication, and division. The program should take two numbersand an operation choice as input, and then use the function to perform the operation.*/

#include <stdio.h>
int calculate(int a, int b, char opr);

int main ()
{
    int a, b;
    char opr;
    printf ("enter num1: ");
    scanf("%d", &a);
    printf ("enter num2: ");
    scanf("%d", &b);
    printf ("enter operator(num1 operator num2): ");
    scanf(" %c", &opr);
    if(calculate(a, b, opr) != -1)
        printf ("answer=%d", calculate(a, b, opr));
    else
        printf ("invalid operator. Enter +, -, *, /");
}

int calculate(int a, int b, char opr)
{
    switch(opr)
    {
        case '+':
        return a + b;
        
        case '-':
        return a-b;
        
        case '*':
        return a*b;
        
        case '/':
        return a/b;
        
        default:
        return -1;
    }
}