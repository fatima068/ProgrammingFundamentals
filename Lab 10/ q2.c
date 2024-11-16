// Define a structure to represent a point in 2D space with x and y coordinates. Implement
// functions to calculate the distance between two points and to check if a point lies within a specific rectangular boundary.

#include <stdio.h>
#include <math.h>

typedef struct point
{
    int x;
    int y;
}point;

float dist(point P1, point P2);
void is_rect(point, point, point);

int main()
{
    point P1, P2;
    printf("Enter x co ordinate of P1 for distance: ");
    scanf("%d", &P1.x);
    printf("Enter y co ordinate of P1 for distance: ");
    scanf("%d", &P1.y);
    printf("Enter x co ordinate of P2 for distance: ");
    scanf("%d", &P2.x);
    printf("Enter y co ordinate of P2 for distance: ");
    scanf("%d", &P2.y);
    printf("Distance is %f\n", dist(P1, P2));
    
    printf("\nIS GIVEN POINT INSIDE A RECTANGLE BOUNDARY?\n");
    point P3, P4, P5;
    printf("Enter x cord of point to check: ");
    scanf("%d", &P3.x);
    printf("Enter y cord of point to check: ");
    scanf("%d", &P3.y);
    
    printf("Enter x1 cord of rectangle diaognal: ");
    scanf("%d", &P4.x);
    printf("Enter y1 cord of rectangle diaognal: ");
    scanf("%d", &P4.y);
    
    printf("Enter x2 cord of rectangle diaognal: ");
    scanf("%d", &P5.x);
    printf("Enter y2 cord of rectangle diaognal: ");
    scanf("%d", &P5.y);
    is_rect(P4, P5, P3);
}

float dist(point P1, point P2)
{
    int x, y;
    float dist;
    x = pow(P1.x - P2.x, 2);
    y = pow(P1.y - P2.y, 2);
    dist = x + y;
    dist = pow(dist, 0.5);
    return dist;
}

void is_rect(point P1, point P2, point P3)
{
    if(P1.x > P2.x)
    {
        if(P3.x <= P1.x && P3.x >= P2.x && P3.y <= P1.y && P3.x >= P2.y)
        {printf("Point inside rectangle");}
        else  printf("Point outside rectangle");
    }
    else if (P1.x < P2.x)
    {
        if(P3.x >= P1.x && P3.x <= P2.x && P3.y >= P1.y && P3.x <= P2.y)
        {printf("Point inside rectangle");}
        else  printf("Point outside rectangle");
    }
    else  printf("Point outside rectangle");
}