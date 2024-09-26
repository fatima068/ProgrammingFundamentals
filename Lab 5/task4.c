
/*TASK4: nested if statements */

#include <stdio.h>
int main ()
{
	int ph;
	printf ("enter pH\n");
	scanf ("%d", &ph);
    
	if (ph > 7)
	{
	if (ph < 12)
	{ printf ("alkaline"); }
	else { printf("very alkaline");}}
        else if (ph == 7)
		{ printf ("neutral");}
	else if (ph > 2) 
		{printf("acidic");}
	else { printf("very acidic"); }
}
