//2. Write a program to check whether a given number is prime or not.

#include <stdio.h>
int main () {
	int userin, i;
	printf ("enter a number ");
	scanf ("%d", &userin);
	for (i=2; i<userin; i++)
	{
		if (userin % i == 0)
		    {
		        printf ("not prime");
		        break;
		    }
	}
if (i == userin)
{printf("prime");} 	
}