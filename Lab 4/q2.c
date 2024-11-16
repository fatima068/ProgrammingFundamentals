/*2. Write a C program which asks the user for an input (any number) and only
accepts numbers that are (positive, multiple of 2 and divisible by 10). Any
other number should be discarded (Write the condition in a single statement
no nesting)*/

#include <stdio.h>
int main(){
int userin;
printf("Enter a number");
scanf("%d", &userin);
if ((userin >= 0)  && (userin%2 == 0) && (userin%10 == 0))
{printf("Valid input");}
else
{printf("invalid input");}
return 0;
}
