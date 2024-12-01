/*Define a structure Employee with fields name, id, salary, and a nested structure Address
(fields: city and zip_code). Write a program to input details for multiple employees, store
them in a file, and read them back to display.*/

#include <stdio.h>

typedef struct {
    char city[50];
    int zipcode;
} Address;

typedef struct {
    char name[50];
    int id;
    float salary;
    Address address;
} Employee;

int main ()
{
    //input for 3 employees 
    Employee employees[3];
    for(int i = 0; i<3; i++)
    {
        printf("\nEMPLOYEE %d INPUTS\n", i + 1);

        printf("Enter Name: ");
        getchar();
        gets(employees[i].name);

        printf("Enter ID: ");
        scanf("%d", &employees[i].id);

        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);

        printf("Enter City: ");
        getchar();
        gets(employees[i].address.city);

        printf("Enter Zip Code: ");
        scanf("%d", &employees[i].address.zipcode);
    }
    
    //store in a file
    FILE* fptr=fopen("employee.txt", "wb");
    if (fptr == NULL) 
    {
        printf("File not found");
        return 0;
    }
    //write 3 structs
    for(int i= 0; i<3; i++)
    {
         fwrite(employees, sizeof(Employee), 1, fptr);
    }   
    fclose(fptr);
    
    //read and display all 3
    fptr=fopen("employee.txt", "rb");
    if (fptr == NULL) 
    {
        printf("File not found");
        return 0;
    }
    
    Employee readEmployees[3];   
    fread(readEmployees, sizeof(Employee), 3, fptr);
    fclose(fptr);

    printf("\nEMPLOYEE DETAILS FROM FILE:\n");
    for (int i = 0; i < 3; i++) 
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", readEmployees[i].name);
        printf("ID: %d\n", readEmployees[i].id);
        printf("Salary: %.2f\n", readEmployees[i].salary);
        printf("City: %s\n", readEmployees[i].address.city);
        printf("Zip Code: %d\n", readEmployees[i].address.zipcode);
    }
}