/*3. Create a calculator asking for operator (+ or – or * or /) and operands and
performs calculation according to the user input using switch statement.*/

#include <stdio.h>
int main(){
int num1, num2;
char operator;

printf ("enter num1 ");
scanf("%d", &num1);

printf ("enter num2 ");
scanf("%d", &num2);

printf ("enter operator ");
scanf(" %c", &operator);


switch(operator){
case '+':
	printf("ans is %d", num1+num2);
	break;

case '-':
	printf("ans is %d", num1-num2);
	break;

case '*':
	printf("ans is %d", num1*num2);
	break;

case '/':
	printf("ans is %d", num1/num2);
	break;
default:
	printf("invalid operator");

}
}