/*8. Make another pattern like this but in the shape of an hourglass
A B C D E
   C    F
      E
   E    H
E F G H I
*/

# include <stdio.h>
int main (){
    int i;
    for (i=0; i<5; i++)
    {
            if (i == 0 || i == 4)
                    {
                        printf("%c %c %c %c %c\n", i+65, i+66, i+67, i+68, i+69);
                    }
            else if (i == 1 || i == 3)
                    {
                        printf("  %c   %c  \n", i+66, i+69);
                    }
            else
                    {
                        printf("    %c    \n", i+67);
                    }
    }
}