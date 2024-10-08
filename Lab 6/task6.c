/*6. Make an opposite of the above-mentioned pattern using do-while loop
*   *
*****
*****
*****
*****
*   *
*/


#include <stdio.h>
int main () {
	int i;
	for(i=0; i<6; i++)
	{
		if (i == 0 || i == 5)
		{
			printf("*   *\n");
		}
		else 
		{
			printf("*****\n");
		}
	}
	
}
