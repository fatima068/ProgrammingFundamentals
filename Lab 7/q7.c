/*8. You are required to design a calculator utilizing an array. Take a string from the user i.e.
20+10-30 and store it in an array. Traverse through the array, if there are values stored
them in some variable and if an operation comes perform the necessary operation and if
a null character comes display the result. If the null character comes after the operator,
the program should print an invalid expression. (Note: Only do this for + and - operator)*/

#include <stdio.h>

int main() {
    char userin[50];
    printf("Enter a string to perform addition or subtraction (e.g., 20+10-5): ");
    scanf("%s", userin);

    int result = 0, currentNum = 0;
    char currentOp = '+'; // Start with addition to initialize
    int i = 0;

    while (userin[i] != '\0') {
        if (userin[i] >= '0' && userin[i] <= '9') {
         currentNum = currentNum * 10 + (userin[i] - '0');
        } 
        else if (userin[i] == '+' || userin[i] == '-') {
            // Perform the previous operation
            if (currentOp == '+') {
                result += currentNum;
            } else if (currentOp == '-') {
                result -= currentNum;
            }
            
            currentOp = userin[i];
            currentNum = 0;
        } else {
            printf("Invalid character encountered: %c\n", userin[i]);
            return 1;
        }
        i++;
    }

    // Perform the last operation
    if (currentOp == '+') {
        result += currentNum;
    } else if (currentOp == '-') {
        result -= currentNum;
    }

    printf("Result: %d\n", result);
    return 0;
}
