#include <stdio.h>

void recursiveBubbleSort(int arr[], int size)
{
    int temp;
    if (size == 1)
        return;
    for (int j = 0; j < size-1 ; j++)
    {
         if (arr[j] > arr[j + 1])
         {
             temp=arr[j];
             arr[j] = arr[j+1];
             arr[j+1]=temp;
         }
     }
     recursiveBubbleSort(arr, size-1);
}

int main ()
{
    int arr[100], size;
    printf("Enter array size: ");
    scanf("%d", &size);
    
    for (int i = 0; i<size; i++)
    {
        printf ("enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf ("ORIGINAL ARRAY: ");
    for(int i =0; i<size; i++)
        printf ("%d\t", arr[i]);
   
    recursiveBubbleSort(arr, size);
    
     printf ("\nSORTED ARRAY: ");
    for(int i =0; i<size; i++)
        printf ("%d\t", arr[i]);
}