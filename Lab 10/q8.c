//Write a recursive function linearSearch that takes an array, its size, the target element to
//search for, and the current index. It checks if the target is at the current index and
//continues searching in the subsequent indices until it either finds the target or exhausts
//the array.

#include <stdio.h>
void recursiveLinearSearch(int arr[], int size, int target, int currentindex);

int main()
{
    int target;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf ("Enter element to find: ");
    scanf("%d", &target);
    recursiveLinearSearch(arr, 10, target, 0);
}

void recursiveLinearSearch(int arr[], int size, int target, int currentindex)
{
     if(currentindex == size)
    {
        printf ("array exhausted, not found");
        return;
    }
    if (arr[currentindex] == target)
    {
        printf ("found");
        return;
    }
    recursiveLinearSearch(arr, size, target, currentindex+1);
}