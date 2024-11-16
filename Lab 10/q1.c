/* Write a recursive function that takes an array and its size as input and prints all the
elements */

#include<stdio.h>
void printArr(int[], int);

int main()
{
	int arr[100];
	int size;
	printf("Enter size of array: ");
	scanf("%d", &size);
	for (int i = 0; i < size; i++)
	{
		printf("Enter array element: ");
		scanf("%d", &arr[i]);
	}
	printArr(arr, size-1);
}
 
void printArr(int arr[], int size)
{
    if(size == -1)
    {
        return;
    }

    printArr(arr, size-1);
    printf("%d\t", arr[size]);
}

