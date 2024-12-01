/*Task 1: Write a program that calculates the sum of all the elements in array using pointers (Note: Generate the array via user)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum=0;
    printf ("Enter num of array elements: ");
    scanf("%d", &n);
    int* arr = (int*)malloc(n*sizeof(int));
    for(int i = 0; i<n; i++)
    {
        printf ("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf ("Sum: %d", sum);
    free(arr);
}