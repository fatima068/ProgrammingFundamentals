/*5.Make a pattern mentioned below using loops
* * * * * 
*         *
*         *
*         *
*         *
* * * * *
*/

# include<stdio.h>
int main (){  
    int i;
    for (i=0; i<6; i++)
    {
        if (i == 0 || i == 5)
        {
            printf ("* * * * *\n");
        }
        else 
        {
            printf ("*       *\n");
        }
    }
}