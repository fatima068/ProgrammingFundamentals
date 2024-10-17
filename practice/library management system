#include <stdio.h>

int main() 
{
    int flag=1, i, option, booknum;
    int book[5], available[5];
    for( i = 0; i<5; i++)
    {
        book[i]=i;
        available[i] = 1;
    }
    
    while(flag == 1)
    {
        printf("Library Management System\n 1. Check out a book\n 2. Return a book\n 3.Exit\n Choose an option: ");
        scanf("%d", &option);
        switch (option)
        {
            
            case 1: //CHECK OUT 
                printf("available books\n");
                for(i=0; i<5; i++)
                {
                    if(book[available[i]]==1)
                    {
                        printf("Book %d\n", book[i]+1);
                    }
                }
                printf("enter no of book to check out: ");
                scanf("%d", &booknum);
                
                if (available[booknum-1] == 0)
                {
                    printf("invalid input \n");
                    continue;
                }
                else
                {
                   available[booknum-1] = 0; 
                }
                break;
                
            case 2: //RETURN
                printf("enter book number to return: \n");
                scanf("%d", &booknum);
                if (available[booknum-1] == 1)
                {
                    printf("book already available\n");
                }
                else
                {
                    available[booknum-1] = 1;
                }

            case 3: //EXIT
                flag = 0;
                break;
                
            default: printf("invalid input");
            
        }
    }
    
}
