//Define a Book structure with fields like title, author, publication_year, and price. Create
//an array of books and write functions to:
//1. Display all books in the library
//2. Search for a book by title
//3. List book by a specific author 

#include <stdio.h>
#include <string.h>

typedef struct Book{
    char title[20];
    char author[20];
    int year;
    float price;
} book;

void displayBooks(book arr[], int count);
void searchTitle(book arr[], int count, char titleToSearch[]);
void searchAuthor(book arr[], int count, char authorToSearch[]);

int main ()
{
    book arr[50];
    int choice, count;
    char titleToSearch[20], authorToSearch[20];
    printf ("Enter total books in the library: ");
    scanf("%d", &count);
    getchar();
    
    for (int i = 0; i < count; i++) {
        printf("\nEnter details for book\n");
        printf("Title: ");
        gets(arr[i].title);
        printf("Author: ");
        gets(arr[i].author);
        printf("Publication Year: ");
        scanf("%d", &arr[i].year);
        printf("Price: ");
        scanf("%f", &arr[i].price);
        getchar();
    }
    
    while (1) {
        printf("\nLIBRARY MENU:\n1. Display all books\n2. Search for a book by title\n3. List books by a specific author\n4. Exit\n");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                displayBooks(arr, count);
                continue;
            case 2:
                printf("Enter the title to search: ");
                gets(titleToSearch);
                searchTitle(arr, count, titleToSearch);
                continue;
            case 3:
                printf("Enter the author's name: ");
                gets(authorToSearch);
                searchAuthor(arr, count, authorToSearch);
                continue;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                continue; 
        }
        break;
    }
}


void displayBooks(book arr[], int count)
{
    for(int i=0; i<count; i++)
        printf ("Book Name: %s\n", arr[i].title);
}


void searchTitle(book arr[], int count, char titleToSearch[])
{
    int flag = 0;
    for(int i=0; i<count; i++)
    {
        if(strcmp(arr[i]. title, titleToSearch) == 0)
        {
            printf ("Book found\n");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf ("Book not found\n");
}


void searchAuthor(book arr[], int count, char authorToSearch[])
{
    int flag = 0;
    for(int i=0; i<count; i++)
    {
        if(strcmp(arr[i].author, authorToSearch) == 0)
        {
            printf ("Author found\n");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf ("Author not found\n");
}