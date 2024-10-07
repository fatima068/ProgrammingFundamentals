/* 4. Write a program to check whether a number is an Armstrong number or not. An Armstrong number isa number that is equal to the sum of cubes of its digits. */

#include <stdio.h> 
int main () {
    int num, userin, sum = 0, digit;
    printf ("enter a number ");
    scanf ("%d", &userin);
    num = userin;
    
    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
        sum = sum + (digit * digit * digit);
        
    }
    if (sum == userin)
        printf ("Armstrong ");
        else 
            printf ("not Armstrong");
            
}