/*  Writing numbers and their powers to file from 1 to 10  */

#include <stdio.h>

int main (void)
{
    FILE  *fp;
    char filename[100] = "test_power.txt";
    char content;
    int i = 1;
    int result;

    fp = fopen(filename, "w");
    if (fp != NULL)
    {
        while (i <= 10)
        {
            result = i * i;
            fprintf(fp, "%d * %d = %d\n", i, i, result);
            i++;
        }
    }

    fclose(fp);

    fp = fopen(filename, "r");

    /*  way 1
    for (i = 1; i <= 10; i++)
    {
        fscanf(fp, "%d * %d = %d\n", &i, &i, &result);
        printf("%d * %d = %d\n", i, i, result);
    }
    */
    /*way 2 */
    while ((fscanf(fp, "%d * %d = %d\n", &i, &i, &result)) != EOF)
    {
        printf("%d * %d = %d\n", i, i, result);
    }

    fclose(fp);

    return 0;
}