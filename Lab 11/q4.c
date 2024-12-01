/*Create a program that defines a structure Student with fields roll_no, name, and another
nested structure Marks (fields: maths, science, and english). Use an array of Student to
store data for 5 students and calculate the average marks for each student.*/

#include <stdio.h>
typedef struct {
    int maths;
    int science;
    int english;
}Marks;

typedef struct {
    char roll_no[7];
    char name[20];
    Marks marks;
}Student;

int main()
{
        Student arr[5];
        for (int i = 0; i < 5; i++)
        {   
            printf("\nStudent %d\n", i + 1);
            printf ("Enter roll number(eg 24k0924): ");
            scanf("%s", arr[i].roll_no);
            printf("Enter name: ");
            scanf("%s", arr[i].name);
            printf("Maths marks: ");
            scanf("%d", &arr[i].marks.maths);
            printf("Science marks: ");
            scanf("%d", &arr[i].marks.science);
            printf("English marks: ");
            scanf("%d", &arr[i].marks.english);
            int total = arr[i].marks.maths + arr[i].marks.science + arr[i].marks.english;
            printf("%s's average marks are %.2f\n", arr[i].name, total/3.0); 
        }  
}