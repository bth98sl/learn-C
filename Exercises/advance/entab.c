/** Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing
 *  use the same tab stops as for detab
 *  when either a tab or a single blank would suffice to reach a tab stop which should be given preference?
 *
*/

#include <stdio.h>
#define TAB     8

int main(void)
{
    int c;
    int cnt_sp = 0;
    int col = 0;
    int stop;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            cnt_sp++;
        }
        else
        {
            while (cnt_sp > 0) //8
            {
                stop = (((col / TAB) + 1) * TAB);
                if (cnt_sp >= stop - col)//8>=2
                {
                    putchar('\t');
                    cnt_sp -= stop - col;//cnt = 8-2 = 6
                    col = stop; //col = 8 
                    printf("col = st = %d\n", col);
                }
                else
                {
                    putchar(' ');
                    cnt_sp--;
                    col++;
                    printf("col + = %d\n", col);
                }
            }
            putchar(c);
            col++;//6
            printf(" = %d\n", col);
        }
    }

    return 0;
}