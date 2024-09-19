/*Task1: Write a program that asks for the number of calories and fat grams in a food.  The program
should display the percentage of calories that come from fat

One gram of fat has 9 calories, so Calories from fat = fat grams * 9

The percentage of calories from fat can be calculated as: calories from fat/total calories

Input validation: Make sure the number of calories and fat grams are not less than 0.

Also, the number of calories from fat cannot be greater than the total number of calories.  If that
happens, display an error message indicating that either the calories or fat grams were incorrectly
entered.*/
#include <stdio.h>
int main (){
	int fat, calories;
	float fatcal, percent;
	
	printf("enter number of calories ");
	scanf("%d", &calories);
	printf("entr number of fat grams ");
	scanf("%d", &fat);
	
	if (fat >= 0 && calories >= 0)
		{fatcal = fat * 9.0;
		
		if (fatcal <= calories)
			{percent = (fatcal/calories)*100.0;
			printf("percentage of calories from fat are %f", percent);}
			else
				{printf("ftacal exceed total");}}
	else {printf("number of fats or calories entered incorectly " );}
	
}