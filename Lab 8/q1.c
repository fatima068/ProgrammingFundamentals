/*1. Write a C program that generates a sequence of prime numbers within a given range using
nested loops.*/
int prime(int n);

#include<stdio.h>
int main ()
{
    int range, i;
    printf("enter range to generate sequence of prime numbers: ");
    scanf("%d", &range);

    for (i=1; i<range; i++)
    {
        if (prime(i) == 0)
            printf("%d ", i);
    }
}

int prime(int n)
{
    int ans=0, i;
	for (i=2; i<n; i++)
	{
		if (n % i == 0)
		    {
		        ans = -1;
                break;
		    }
	}
    return ans;
}
