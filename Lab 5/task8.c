#include <stdio.h>
int main () {
	int rollnum, section, year, sem;
	printf("enter your roll number eg 240998 ");
	scanf(" %d", &rollnum);
	section = (rollnum / 1000) % 10;
	year = rollnum / 10000;

	year == 21 ? printf("7th semester\n"):year == 22 ? printf ("5th semester\n"):year == 23 ? printf("3rd semester\n"):year == 24 ? printf("1st semester\n"):printf("invalid roll num entered\n");;;;

	section == 1 ? printf("section A") :section == 2 ? printf("section B") :section == 3? printf("section C") :section == 4 ? printf("section D") :section == 5 ? printf("section E") :section == 6 ? printf("section F") :section == 7 ? printf("section G") :section == 8 ? printf("section H") :section == 9 ? printf("section I") :printf("invalid roll num ");;;;;;;;;;
}
