#include <stdio.h>
int main()
{
    int totalRows, grid[100][100];
    printf ("enter total number of rows: ");
    scanf("%d", &totalRows);
    int x=totalRows-1, i, j, firstCol;
    
    for(i=0; i<100; i++)
    {
        for(j=0; j<100; j++)
            grid[i][j] = 0;
    }
    
    for(i=0; i<totalRows; i++)
    {
        grid[i][x-i] = 1;
        grid[i][x+i] = 1;
        if(i>1)
        {
            firstCol = x-i+2;
            for(j=firstCol; j<x+i; j+=2)
            {
                grid[i][j] = grid[i-1][j-1] + grid[i-1][j+1]; 
            }
        }
    }   
      
    for(i=0; i<totalRows; i++)
    {
        for(j=0; j<2*totalRows-1; j++)
            {
                if(grid[i][j] != 0)
                    printf ("%d", grid[i][j]);
                else
                    printf(" ");
            }
        printf ("\n");
    }
}