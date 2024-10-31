/*Write a C program to generate a diamond shape pattern using nested loops. The program
should take the number of rows for the upper half of the diamond as input from the user.
   *
  * *
 * * *
* * * *
 * * *
  * *
   *
*/

#include <stdio.h>
int main()
{
    int rows, spaces, asteriks, i, j;
    printf("enter number rows: ");
    scanf("%d", &rows);
    for (i=1; i<=rows; i++)
    {
        printf("\n");
        spaces = rows-i;
        asteriks = i;
        for(j=0; j<spaces; j++)
            printf(" ");
        for(j=0; j<asteriks; j++)
            printf("* ");
    }
    
    for(i=rows-1; i>0; i--)
    {
        printf("\n");
        spaces = rows-i;
        asteriks = i;
        for(j=0; j<spaces; j++)
            printf(" ");
        for(j=0; j<asteriks; j++)
            printf("* ");
    }
}
