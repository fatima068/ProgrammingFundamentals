/*Task5:
Implement the following decision table using nested ternary operators. Assume
that the grade point average is within the range 0.0 through 4.0.*/

#include <stdio.h> 
int main(){
    float gpa;
    printf ("enter your gpa\n");
    scanf("%f", &gpa);
    
    (gpa >= 0.0 && gpa <= 0.999)? printf("failed semester, registration suspended"): (gpa >= 1.0 && gpa <= 1.999)? printf("on probation for next semester"):(gpa >= 2.0 && gpa <= 2.999)? printf(".."):(gpa >= 3.0 && gpa <= 3.499)? printf("deans list"):(gpa >= 3.5 && gpa <= 4.0)? printf("highest honors"):printf("invalid input");;;;;
    
} 
    

