/*5. Write a C program to input a character from the user and check whether the
given character is a small alphabet, capital alphabet, digit, or special character,
using if else.*/

#include <stdio.h>
int main(){
char userin;
printf("enter a character");
scanf(" %c", &userin);
if (userin >= 'A' && userin <= 'Z')
	{printf("capital letter");}
else if (userin >= 'a' && userin <= 'z')
	{printf("small letter");}
else if (userin >= '0' && userin <= '9')
	{printf("digit");}
else
	{printf("special character");}
}
