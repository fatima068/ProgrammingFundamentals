/*Create a C program that swaps the values of two integers using a user-defined function,
swapIntegers. The user inputs two integer values, and the program uses the function to swapthem. It should perform the swap and display the updated values.*/

#include <stdio.h>
void swapIntegers(int a, int b);

int main()
{
    int a, b;
    printf("enter two numbers to swap\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("\nBEFORE SWAPPING\na=%d\nb=%d\n\nAFTER SWAPPING\n", a, b);
    swapIntegers(a, b);
}

void swapIntegers(int a, int b)
{
    int temp = b;
    b = a;
    a = temp;
    printf("a=%d\nb=%d", a, b);
}