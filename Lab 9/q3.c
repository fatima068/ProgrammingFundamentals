/*3. Implement a function that checks if a given integer is a prime number. Use this function in the
main program to check if numbers entered by the user are prime.*/
#include <stdio.h>
int prime(int num);
int main()
{
	int num, flag;
	printf("enter number: ");
	scanf("%d", &num);
	if(prime(num) == 1)
	     printf("number is prime"); 
	 else
	     printf("number is not prime");    
}

int prime(int num)
{
    if(num> 1)
    {
        for(int i=2 ; i < num; i++)
        {
            if(num % i == 0)
                return 0;
        }
        return 1;
    }
    else
        return 0;     
}