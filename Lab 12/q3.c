/*Task 3:
Write a C Program to Find Largest Number in an array Using Dynamic Memory Allocation. Note:
The array must be dynamically resized and initially the array size will be taken by the user and then resized by the user
Example:          arr[5]={1,2,3,4,5}
After resizing:  arr[7]={1,2,3,4,5,6,7}
Take the same array and resize it.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n, x;
    printf ("enter array size: ");
    scanf("%d", &n);
    int* arr =(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf ("enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf ("enter new array size: ");
    scanf("%d", &x);
    arr =(int*)realloc(arr, x*sizeof(int));
    for(int i=n; i<x; i++)
    {
        printf ("enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}