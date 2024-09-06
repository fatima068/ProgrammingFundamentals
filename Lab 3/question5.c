//QUESTION#5
//Construct a C program with the flowchart below. The input value of the principle must be between 100
//Rs. To 1,000,000 Rs. The Rate of interest must be between 5% to 10% and Time Period must be between
//1 to 10 years. Hint: these restrictions can be displayed in the form of message on the window.

#include <stdio.h>
int main(){
	float p, r, interest;
	int t;
	printf("Enter Principle, Rate and Time Period");
	scanf("%f", &p);
	scanf("%f", &r);
	scanf("%d", &t);
	if ((p<=1000000) && (p >= 100) && (r<=10) && (r>=5) && (t<=10) && (t>=1))
		{interest = (p * r * t)/100;
		printf("interest = %f", interest);}
		else
		printf("Invalid input");
}