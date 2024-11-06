/*Create a function that reverses a given string and returns the reversed string. Use this function in the main program to display the reversed string entered by the user.*/

#include <stdio.h>
#include <string.h>
void reverse(char str[50]);

int main ()
{
    char str[50];
    printf("enter string to reverse: ");
    gets(str);
    reverse(str);
    printf("%s", str);
}

void reverse(char str[50])
{
    for(int i=0; i<strlen(str)/2; i++)
    {
        char temp = str[i];
        str[i] = str[strlen(str)-1-i];
        str[strlen(str)-1-i] = temp;
    }
}