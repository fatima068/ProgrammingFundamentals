/*Write a C program to find the saddle point(s) in each 3x3 matrix. A saddle point is an element that is the smallest in its row and the largest in its column*/

#include <stdio.h>
int main ()
{
   int matrix[3][3], i, j, col, flag = 0, row;
   
   //TAKING INPUT TO STORE VALUES IN MATRIX
   for (i=0; i<3; i++)
   {
       for (j=0; j<3; j++)
       {
           printf("enter element to enter: ");
           scanf("%d", &matrix[i][j]);
       }
   }
   
   //FINDING SADDLE POINT
   //SEARCHING ROW FOR MINIMUM
   for (i=0; i<3; i++)
   {
       int minimum = 9999;
       for(j=0; j<3; j++)
       {
            if (matrix[i][j] < minimum)
            {
                minimum = matrix[i][j];
                col=j;
            }
       }
       //SEARCHING COLUMN FOR MAXIMUM
       int maximum = -9999;
       for(row=0; row<3; row++)
       {
           if (matrix[row][col] > maximum)
            {
                maximum = matrix[row][col];
            }
       }
        if (maximum == minimum)
        {
            printf("saddle point is %d\n ", maximum);
            printf("position of saddle point is row %d, column %d", row-1, col);
            flag = 1;
        }
   }
   
   if (flag == 0)
        printf("no saddle point found");
   
}
