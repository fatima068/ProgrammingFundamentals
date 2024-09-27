/*Task3: Write a program to control a coffee machine. Allow the user to input the type of coffee as B for Black and W for White. Ask the user if the cup size is double and if the coffee is manual. The following table details the time chart for the machine for each coffee type. Display a statement for each step. If the coffee size is double, increase the baking time by 50 percent. Use functions to display instructions to the user and to compute the coffee time.*/


#include <stdio.h>
int main () {
	char coffeetype, doublecup, manual;
	printf("enter b for black and w for white coffee ");
	scanf(" %c", &coffeetype);
	printf ("enter y if you want double, else enter n ");
	scanf(" %c", &doublecup);
	printf ("is coffee manual? enter y for yes, else enter n ");
	scanf(" %c", &manual);
}