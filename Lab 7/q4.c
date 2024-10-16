//Write a program which identifies if a given string is a palindrome using arrays.

#include <stdio.h>
int main ()
{
    char userIn[50], str[50];
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
    
    //storing original string in a new variable
    for(i=0; i<length; i++)
    {
        userIn[i] = str[i];
    }
    
    
    //reversing the original string 
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
    
    //comparing original and reversed string 
    int flag =1;
    for(i=0; i<length; i++)
    {
        if(userIn[i] != str[i])
            flag = 0;
    }
    if (flag == 0)
        printf ("not palindrome");
    else 
        printf ("palindrome");
}
