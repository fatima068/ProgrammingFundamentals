/*Define a structure Date with fields day, month, and year. Create another structure Event
with fields event_name, date (nested Date structure), and location. Write a program to
display all event details in a readable format.*/

#include <stdio.h>
typedef struct {
    int day;
    int month;
    int year;
}Date;

typedef struct {
    char eventname[50];
    Date date;
    char location[50];
}Event;

int main()
{
        Event event;
        printf("Event Name: ");
        scanf("%s", event.eventname);
        printf("Event Location: ");
        scanf("%s", event.location);
        printf("Event day: ");
        scanf("%d", &event.date.day);
        printf("Event month: ");
        scanf("%d", &event.date.month);
        printf("Event year: ");
        scanf("%d", &event.date.year);
        printf("\nEvent Details\nEvent Name: %s\nEvent Location: %s\nDate: %d/%d/%d", event.eventname, event.location, event.date.day, event.date.month, event.date.year);
}