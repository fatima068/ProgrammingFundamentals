//input 10 integers in an array. Count frequency of each element 

#include <stdio.h>
int main()
{
    int arr[10], freq[10], userin, i, j;
    
    for (i=0; i<10; i++)
    {
            printf ("enter number: ");
            scanf("%d", &userin);
            arr[i] = userin;
            freq [i] = 1;
    }
    
    for (i=0; i<10; i++)
    {
        for (j=i+1; j<10; j++)
        {
            if((arr[i] == arr[j]) && (arr[j] != -1))
            {
                freq[i] ++;
                freq[j] =-1;
                arr[j] = -1;
            }
        }
    }
    
    for (i=0; i<10; i++)
    {
        if(freq[i] != -1)
        {
            printf("frequency of %d is %d\n", arr[i], freq[i]);
        }
          
    }
}