#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int N;
    char buffer[100], id[8];

    printf("Enter number of characters in user's name: ");
    scanf("%d", &N);

    char *name = (char *)malloc((N * sizeof(char)) + 1);

    printf("Enter name: ");
    getchar();
    gets(buffer); 
    strcpy(name, buffer);

    name = (char *)realloc(name, (N + 8 + 1) * sizeof(char));    

    printf("Enter ID: ");
    scanf("%s", id);

    strcpy(buffer, name);
    strcpy(name, id);
    
    name[strlen(id)] = ' ';
    name[strlen(id) + 1] = '\0'; 

    strcat(name, buffer);
    printf("%s", name);

    free(name);

    return 0;
}