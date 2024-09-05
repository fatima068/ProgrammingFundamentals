//QUESTION#4
//A car travelled back and forth from point A to point B. With a distance being (single trip) 1207KM. During
//the forward trip fuel price was 118/liter while returning it was 123/liter. Calculate the total fuel cost
//(both ways) and the fuel consumed (total trip). Use the car’s fuel average as input from the user (Input
//must be positive make some restrictions on only accepting positive input)

#include<stdio.h>
int main(){
	const int distance = 1207;
	float fuelAvg, litres, totalcost, totalfuel, dist1cost, dist2cost;
	printf("Enter fuel average: ");
	scanf("%f", &fuelAvg);
	if (fuelAvg > 0)
		{litres = 1207 / fuelAvg;
		dist1cost = litres * 118;
		dist2cost = litres * 123;
		totalcost = dist1cost + dist2cost;
		totalfuel = litres*2;
		printf("total cost is %f and total fuel consumed is %f", totalcost, totalfuel);}
		else
		{printf("invalid value entered");}
}