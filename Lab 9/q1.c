/*Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20
characters each). Determines if each word (row) is a palindrome. Outputs “Palindrome” or “Not
Palindrome” for each word. A palindrome is a word that reads the same forward and backward.

For example: "madam", "racecar", "level", "radar".*/

#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[50][50], reverse[50][50], temp;
    int totalwords, i, j;
    printf ("how many words do u want to check? ");
    scanf("%d", &totalwords);
    for(i=0; i<totalwords; i++)
    {
        printf ("enter word %d: ", i+1);
        scanf("%s", arr[i]);
        strcpy(reverse[i], arr[i]);
    }
    
    //LOOPING THROUGH EVERY WORD
    for(i=0; i<totalwords; i++)
    {
        //REVERSING WORD
        for(j=0; j<strlen(arr[i])/2; j++)
        {
            temp = reverse[i][j];
            reverse[i][j] = reverse [i][strlen(arr[i])-1-j];
            reverse [i][strlen(arr[i])-1-j] = temp;
            
        }
    }
    
    //COMARING ORIGINAL AND REVERSED
    for(i=0; i<totalwords; i++)
    {
        if(strcmp(arr[i], reverse[i]) == 0)
            printf ("%s is palindrome\n", arr[i]);
        else
        printf("%s is not palindrome\n", arr[i]);
    }
}
