/* 1. Which loop system would be better for user input. Justify your answer by creating a program that
takes a value and adds it to a variable and prints it repeatedly until the user enters a zero value*/

// ANSWER: do while loop system is better because it will repeatedly take input until user enters 0 

#include <stdio.h>
int main () 
{
	int num, sum = 0;
	do 
	{
		printf ("enter a number ");
		scanf ("%d", &num);
		sum = sum + num;
	} while (num != 0);
	printf ("sum is %d", sum);
}
