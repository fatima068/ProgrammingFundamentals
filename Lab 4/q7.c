/*Write a program in C to calculate and print the Electricity bill of a given customer. The customer id., name and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer. The charges are as follow:
Unit
Charge                                Unit
Up to 199                            @16.20
200 and above but less than 300      @20.10
300 and above but less than 500      @27.10
500 and above                        @35.90

If the bill exceeds Rs. 18000 then a surcharge of 15% will be charged on top of the bill.
Test Input: 
1001 //Customer ID
James //Customer Name
800 //Units Consumed

Expected Output:
Customer ID :1001 
Customer Name: James 
Units Consumed :800
Amount Charges @Rs. 35.90 per unit: 28720 
Surcharge Amount: 4308 
Net Amount Paid by the Customer: 33028.00*/

#include<stdio.h>
int main(){

	int id;
	char name[50];
	float total, surcharge,unitcost, totalPaid, units;

	printf("enter your id ");
	scanf("%d", &id);
	printf("enter your name ");
	scanf("%s", name);
	printf("enter units consumed ");
	scanf("%f", &units);

	if (units < 200) 
        	{unitcost = 16.20;}
	else if (units < 300)
        	{unitcost = 20.10;}
	else if (units < 500) 
        	{unitcost = 27.10;}
	else 
		{unitcost = 35.90;}

	total = units * unitcost;
	surcharge = 0.0;
	if (total > 18000)
		{surcharge = total * 0.15;}
		
	totalPaid = total +surcharge;
	
	printf( "Customer ID : %d \n", id);
	printf( "CustomerName : %s \n", name);
	printf( "Units Consumed: %f \n", units);
	printf( "AmountCharges @Rs. %f per unit: %f \n", unitcost, total);
	printf( "Surchage amount: %f \n", surcharge);
	printf( "total paid by customer: %f", totalPaid);
}
