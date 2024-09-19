/* Task2:
The weekday is true if it is a weekday, and the vacation is true if we are on vacation. We sleep in if it is
not a weekday or we're on vacation. Print true if we sleep in.
sleepIn(false, false) → true
sleepIn(true, false) → false
sleepIn(false, true) → true */

#include <stdio.h>
int main(){
	int weekday;
	char vacation;
	printf("enter weekday number, 1 to 7 ");
	scanf ("%d", &weekday);
	printf("enter vacation, y for yes n for no ");
	scanf(" %c", &vacation);
	
	if ( (vacation == 'y') || ((vacation == 'n') && (weekday == 6 || weekday == 7)) )
		printf("true");
	else
		printf("false");
}