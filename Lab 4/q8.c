/*Given a positive integer denoting n, do the following:
If 1<=n<=9, print lowercase English words corresponding to the numbers e.g. (one for 1, two for 2)
If n>9 print greater then 9*/

#include <stdio.h>
int main(){
	int n;
	printf("Enter an integer");
	scanf("%d", &n);
	switch(n){
		case 1:
			printf("one");
			break;
		case 2:
			printf("two");
			break;
		case 3:
			printf("three");
			break;
		case 4:
			printf("four");
			break;
		case 5:
			printf("five");
			break;
		case 6:
			printf("six");
			break;
		case 7:
			printf("seven");
			break;
		case 8:
			printf("eight");
			break;
		case 9:
			printf("nine");
			break;
		default:
			printf("greater than9");
	}
}
