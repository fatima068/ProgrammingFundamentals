/*Write a program to copy the contents of one file to another. (Create a File with some
dummy data, The data is not required to be formatted)*/

#include <stdio.h>
#include <string.h>
int main()
{
    char buffer[256];
    FILE* fptr1=fopen("source.txt", "w");
    FILE* fptr2=fopen("destination.txt", "w");
    fputs("Hello my name is Fatima\nHello", fptr1);
    fclose(fptr1);
    fptr1=fopen("source.txt", "r");
    while(fgets(buffer, sizeof(buffer), fptr1))
    {
        fputs(buffer, fptr2);
    }
    fclose(fptr1);
    fclose(fptr2);
}
