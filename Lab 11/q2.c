#include <stdio.h>
#include <string.h>

typedef struct {
    char word[20];
    int count;
} WordCount;

int main() {
    
    FILE *fptr = fopen("file.txt", "r");
    if (fptr == NULL) 
    {
        printf("File not found");
        return 1;
    }
    
    char word[20];
    WordCount words[100];
    int wordIndex = 0;

    for (int i = 0; i < 100; i++) 
    {
        words[i].count = 0;
    }

    while (fscanf(fptr, "%s", word) != EOF) 
    {
        int found = 0;
        for (i = 0; i < wordIndex; i++) 
        {
            if (strcmp(words[i].word, word) == 0) 
            {
                words[i].count++;
                found = 1;
                break;
            }
        }

        if (found == 0 && wordIndex < 100) 
        {
            strcpy(words[wordIndex].word, word);
            words[wordIndex].count = 1;
            wordIndex++;
        }
    }
    fclose(fptr);

    printf("WORD COUNTS\n");
    for (int i = 0; i < wordIndex; i++) 
    {
        printf("%s: %d\n", words[i].word, words[i].count);
    }
}