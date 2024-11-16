//6. Design a structure to store information about travel packages, including package name
//destination, duration, cost, and number of seats available. Write a program that allows
//users to book a travel package and display available package

#include <stdio.h>
#include <string.h>

typedef struct TravelPackages{
    char name[20];
    int durationDays;
    float cost;
    int seatsAvailable;
} travelPackages;

void displayAll(travelPackages arr[]);

int main()
{
    int choice, packagenum, seatsnum;
    travelPackages arr[10];
    arr[0] = {"Package One", 30, 500.00, 30};
    arr[1] = {"Package Two", 10, 200.00, 5};
    arr[2] = {"Package Three", 22, 700.00, 18};
    arr[3] = {"Package Four", 17, 350.00, 1};
    
    while(1)
    {
        printf ("\n1. Display all packages\n2. Book a package\n3. Exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                displayAll(arr);
                continue;
            case 2:
                displayAll(arr);
                printf ("\nEnter package number to book: ");
                scanf("%d", &packagenum);
                printf ("Enter number of seats to book: ");
                scanf("%d", &seatsnum);
                if(arr[packagenum-1].seatsAvailable >= seatsnum)
                {
                    printf ("Package successfully booked\n");
                    (arr[packagenum-1].seatsAvailable)--;                  
                }
                else printf ("enough seats not available\n");
                continue;
            case 3:
                printf ("exiting program");
                break;
            default:
                printf ("invalid input, enter again\n");
                continue;
        }
        break;
    }
}

void displayAll(travelPackages arr[])
{
    for (int i = 0; i < 4; i++)
    {
        if(arr[i]. seatsAvailable > 0)
        {
            printf("\nPackage Number: %d\n", i+1);
            printf ("Package Name: %s\n", arr[i].name);
            printf ("Package Duration (days): %d\n", arr[i].durationDays);
            printf ("Package Cost: %f\n", arr[i].cost);
            printf ("Seats Available: %d\n", arr[i].seatsAvailable);
        }
    }
}