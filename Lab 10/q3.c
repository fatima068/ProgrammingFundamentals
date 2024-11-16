//Create a program with a constant that defines the maximum allowable temperature (in
//Celsius). Write a function to compare input temperatures and use a static variable to
//count how many times temperatures exceeded the limit.

#include <stdio.h>

void countLimit()
{
    static int count = 0;
    const int maxTemp = 100;
    int userin;
    printf("Enter Temperature: ");
    scanf("%d", &userin);
    if(userin > maxTemp)
        count++;
    printf ("Temperature exceeds the limit %d times till now\n", count);
        
}

int main ()
{
    int choice = 0;
    while(1)
    {
        printf ("\nSELECT ONE:\n1. Compare\n2. Exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                countLimit();
                continue;
                
            case 2:
                printf("Program ended");
                break; 
                
            default:
                printf("Invalid choice, enter again: \n"); 
                continue;
        }
        break;
    }    
}

