/*7. Define a structure Company with fields name, year_established, and an array departments containing the names of up to 5 departments. Write a program to display company details including all departments.*/
#include <stdio.h>

typedef struct
{  
    char name[50];
    int year_established;
    char departments[5][50];
}Company;

int main()
{
        Company company;
        printf("Enter Company Name: ");
        scanf("%s", company.name);
        printf("Enter year Company was eatablished: ");
        scanf("%d", &company.year_established);
        for (int i = 0; i < 5; i++)
        {
            printf("Enter Department %d: ", i + 1);
            scanf("%s", company.departments[i]);
        }
        printf("\nCompany Details\nCompany Name: %s\nYear Established: %d \nDepartments:\n", company.name, company.year_established);
        for (int i = 0; i < 5; i++)
        {
            printf("%d) %s\n", i + 1 , company.departments[i]);
        }
}