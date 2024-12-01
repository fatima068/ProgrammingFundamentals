/*Task 4:
Write a program that ask the user to enter the total 'N' no of characters in user's name {First Name + Last Name} to create a dynamic array of characters. After create a dynamic array of that 'N' no of characters using malloc or calloc function. Finally copy your full name in it that has already been taken from the user before
Dynamic Array = "Muhib Ahmed";*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N;
    char buffer[100];
    printf("Enter number of characters in user's name: ");
    scanf("%d", &N);
    char *name = (char*)malloc((N*sizeof(char)) + 1);
    printf("Enter name: ");
    getchar();
    gets(buffer);
    strcpy(name, buffer);
    free(name);
}