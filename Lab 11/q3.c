/*Create a function to replace a word in a file with another word.
Read the file into memory, perform a search and replace, and write the modified
content back to the file.*/

#include <stdio.h>
#include <string.h>

int main ()
{
    char word[20], newWord[20], arr[500][500], buffer[20]; 
    int i=0;
    printf("Enter word to search: ");
    scanf("%s", word);
    printf ("Enter new word: ");
    scanf("%s", newWord);
    
    FILE *fptr = fopen("example.txt","r");
    if (fptr == NULL)
    {
        printf ("File not found");
        return 0;
    }
    
    while(fscanf(fptr, "%s", buffer) != EOF)
    {
        if(strcmp(buffer, word) == 0)
        {
            strcpy(arr[i], newWord);
            i++;
        }
        else
        {
            strcpy(arr[i], buffer);
            i++;
        }
    }
    fclose(fptr);
    
    fptr = fopen("example.txt","w");
    if (fptr == NULL)
    {
        printf ("File not found");
        return 0;
    }
    
    for(int j = 0; j<=i; j++)
    {
        fprintf(fptr, "%s", arr[j]);
        if (j<i-1)
            fprintf(fptr, " ");
    }
    fclose(fptr);
}