/*2. Write a program that takes a string as input from the user and counts the frequency of each
vowel (A, E, I, O, U) in the string*/


#include <stdio.h>
int main ()
{
    char str[50];
    int length, i;
    int a=0, e=0, ii=0, o=0, u=0;

    printf ("enter a short string\n");
    scanf ("%s", str);   

    length=sizeof(str) / 4;
    for (i=0; i<length; i++)
    {
        if (str[i] == 'A' || str[i] == 'a')
            a++;

         else if (str[i] == 'E' || str[i] == 'e')
            e++;

         else if (str[i] == 'I' || str[i] == 'i')
            ii++;
            
         else if (str[i] == 'O' || str[i] == 'o')
            o++;
            
         else if (str[i] == 'U' || str[i] == 'u')
            u++;
    }
    
    printf("Count of A is %d\n", a);
    printf("Count of E is %d\n", e);
    printf("Count of I is %d\n", ii);
    printf("Count of O is %d\n", o);
    printf("Count of U is %d\n", u);

}