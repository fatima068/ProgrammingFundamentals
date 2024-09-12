/*6. An online shopping store is providing discounts on the items due to Eid. If
the cost of items is less than 2000 it will give a discount up to 5%. If the cost of
shopping is 2000 to 4000, a 10% discount will be applied. If the cost of
shopping is 4000 to 6000, a 20% discount will be applied. If it is more than 6000
then a 35% discount will be applied to the cost of shopping. Print the actual
amount, saved amount and the amount after discount. The Minimum amount
eligible for a discount is 500.*/

#include <stdio.h>
int main(){
int cost;
float savedAmt, newAmt;
printf("Enter cost: ");
scanf("%d", &cost);
if (cost >= 500)
{if (cost < 2000)
	{newAmt = 0.95 * cost;
	savedAmt = cost - newAmt;}
else if (cost >= 2000 && cost < 4000)
	{newAmt = 0.90 * cost;
	savedAmt = cost - newAmt;}
else if (cost >= 4000 && cost < 6000)
	{newAmt = 0.80 * cost;
	savedAmt = cost - newAmt;}
else
	{newAmt = 0.65 * cost;
	savedAmt = cost - newAmt;}
printf("Actual amount = %d \n Saved amount = %f \n Amount after discount = %f", cost, savedAmt, newAmt);}
else
{printf("amount less than 500");}
}