/*Given an array arr[] of size N which contains elements from 0 to N-1, you need to find
one of the elements occurring more than once in the given array.
Input:
Array Size =5
Element 1=1
Element 2=2
Element 3=3
Element 4=2
Element 5=5
Output:
Number 2 occur more than once.
Note: You cannot utilize nested loops.*/

#include <stdio.h>
int main ()
{
    int i, n, number=-1;
    printf("enter size of array\n");
    scanf("%d", &n);
    int arr[n], freq[n];
    
    //initializing frequency array
    for(i=0; i<n; i++)
        freq[i] = 0;
    
    printf("enter numbers 0 till %d\n", n-1);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
		//storing frequencies in frequency array & checking which number occurs more than once 
    for (i=0; i<n; i++)
    {
          freq[arr[i]] += 1;
          if (freq[arr[i]] > 1)
          {
              number = arr[i];
              break;
          }
    }
    if (number == -1)
    {
        printf("no number occurs more than once");
    }
    else
    {
        printf("number occuring more than once is is %d", number);

    }
}
