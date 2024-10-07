/* 3. Using the above program integrate the number if it is a prime and print the Fibonacci series till that
number.
Example
Input: 5 Output:
Number is prime
Series is = 0 1 1 2 3 */

#include <stdio.h>
int main () {
	
	int userin, i, num1 = 0, num2 = 1, temp = 1;
	
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
    {
        printf("prime\n");
        if (userin == 1)
            printf("Series : 0");
        else if (userin == 2)
            printf (" Series : 0 1");
        else 
            {
                printf ("Series : 0 1 ");
                for (i=2; i<userin; i++)
                {
                    printf ("%d ", temp);
                    num1 = num2;
                    num2 = temp;
                    temp = num1 + num2; 
                }
            }
    } 	
}