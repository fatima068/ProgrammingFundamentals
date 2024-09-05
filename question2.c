//QUESTION#2
//Write a C program that takes two integer values as input from the user. Then swap the values taken
//from the user and display the output of the variables.

#include<stdio.h>
int main(){
	int a, b, temp;
	printf("Enter value 1");
	scanf("%d", &a);
	printf("Enter value 2");
	scanf("%d", &b);
	temp = a;
	a=b;
	b=temp;
	printf("a = %d", a);
	printf("b = %d", b);
}