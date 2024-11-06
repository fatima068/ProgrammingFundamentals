/*6. Create a function that returns the maximum and minimum element in an integer array. Use thisfunction in the main program to find the maximum and minimum from an array entered by theuser.*/

#include <stdio.h>
void max_min(int arr[100], int returnarray[2], int n);
int main()
{
	int n, arr[100], returnarray[2]={9999, -9999}; //[0] stores minimum, [1] stores maximum 
	printf("Enter number of elements for integer array: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
	    printf("enter element %d of array: ", i);
	    scanf("%d", &arr[i]);    
	}
	max_min(arr, returnarray, n);
	printf("Minimum in array is %d and Maximum in array is %d", returnarray[0], returnarray[1]);	
}

void max_min(int arr[], int returnarray[2], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < returnarray[0])
            returnarray[0] = arr[i];
            
        else if(arr[i] > returnarray[1])
            returnarray[1] = arr[i];  
    }
}