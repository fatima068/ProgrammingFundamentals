/* 7. Make another pattern like this using characters
ABCDE
B   F
C   G
D   H
E   I
FGHIJ
*/


#include <stdio.h>
int main (){
	int i, a=65, f=70, b=66;
	for (i=0; i<6; i++)
	{
		if (i == 0)
		{
			printf("%c %c %c %c %c\n", a, a+1, a+2, a+3, a+4);
		}
		else if (i == 5)
		{
		    f=70;
		    printf("%c %c %c %c %c\n", f, f+1, f+2, f+3, f+4);
		}
		else
		{
		   printf("%c       %c\n", b, f);
		   b += 1;
		   f += 1;
		}
	}
}
