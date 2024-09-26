
/*Task7:
Using Ternary operators write a C-Program that can identify if the last digit of the number is
zero or non-zero. If its zero, the program should print “Last Digit is zero” if it’s non-zero the
program should print “Last Digit non-zero”
Example:
Input 5; Output: Last Digit Non-Zero
Input 20; Output: Last Digit Zero*/

#include <stdio.h>
int main (){
    int userin, lastdigit;
    printf("enter integer  ");
    scanf("%d", &userin);
    lastdigit = userin % 10;
    lastdigit == 0? printf("last digit is 0"):printf("last digit non zero");
}

