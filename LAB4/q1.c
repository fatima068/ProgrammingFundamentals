/* 1. Write a C program to check whether a number is multiple of 3 or not. If it is
then print “This number is multiple of 3”, otherwise print “This number is not
multiple of 3”. */

#include <stdio.h>
int main(){
int userIn;
printf("Enter a number");
scanf("%d", &userIn);
if (userIn % 3 == 0) {
printf ("this number is a multiple of 3");}
else
{printf("not a multiple of 3"); }
}