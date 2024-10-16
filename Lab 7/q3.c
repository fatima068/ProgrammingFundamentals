/* Write a program that calculates the length of a string using a pointer. Do not use the built-in
strlen() or sizeof() function. After length calculation reverse the string using the same
pointers*/

#include <stdio.h>
int main ()
{
    char str[50];
    printf ("enter a short string\n");
    scanf("%s", str);
    
    char *endptr = &str[0], *startptr = &str[0];
    
    int length=0, i=0;
    while (str[i] != '\0')
    {
        length ++;
        endptr++;
        i++;
    }
    printf("length of string is %d\n", length);
    
    //reversing
    char temp;  
    endptr--;
    while(startptr < endptr)
    {
        temp = *startptr;
        *startptr = *endptr;
        *endptr = temp;
        startptr++;
        endptr--;
    }
    printf("reversed string: %s", str);
}