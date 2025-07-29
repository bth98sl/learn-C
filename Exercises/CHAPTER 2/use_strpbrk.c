/*  🧩 Given:   Two strings (character arrays): s1[] and s2[].
    🎯 Goal:
    Search through s1, one character at a time.
    Check: "Is this character also in s2?"
    If yes → return the position (index) where that happens in s1.
    If never found → return -1.
    ====
    input:
    s1 = "hello"
    s2 = "world"

    output: 'l' -> index 2 (s1)
*/

#include <stdio.h>
#include <string.h>
#define     SIZE    100

int main(void)
{
    char str1[SIZE];
    char str2[SIZE];

    int pos;

    printf("enter the first string: ");
    fgets(str1, SIZE, stdin);

    printf("enter the second string: ");
    fgets(str2, SIZE, stdin);

    char *result;
    result = strpbrk(str1, str2);

    /* result == &str1[] //pointer to the 'e'
       *result == 'e'    //value at address of 'e'
    */

    if (result != NULL)
    {
        pos = result - &str1[0] ;
        printf("first vowel found: %d\n", pos);
    }
    else
    {
        printf("No vowel found\n");
    }

    return 0;
}