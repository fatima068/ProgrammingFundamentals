/*Create a Function where it accepts a 2D array of strings where it sorts the string in the arraybased on the first character’s ASCII Value in ascending order.
Example: {HELLO,JELLO,MELLO,TELLO,BELLO} //Input to function
Output from Function: {BELLO,HELLO,JELLO,MELLO,TELLO}
Hint: You can use the strcpy function for this to copy the array.*/

#include <stdio.h>
#include <string.h>
void sort(char arr[50][50], int totalWords);

int main() 
{
    char arr[50][50];
    int totalWords, i, j;

    printf("How many words do you want to check? ");
    scanf("%d", &totalWords);

    for (i = 0; i < totalWords; i++) 
    {
        printf("Enter word %d: ", i + 1);
        scanf("%s", arr[i]);
    }
    sort(arr, totalWords);
}

void sort(char arr[50][50], int totalWords)
{
    int i, j;
    char temp[50];
    for (i = 0; i < totalWords - 1; i++) 
    {
        for (j = i + 1; j < totalWords; j++) 
        {
            if (arr[i][0] > arr[j][0]) 
            {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }

    printf("Sorted words:\n");
    for (i = 0; i < totalWords; i++) 
    {
        printf("%s\n", arr[i]);
    }
}