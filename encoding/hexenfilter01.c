// gcc -Wall -std=c11 -pedantic hexenfilter01.c && ./a.out

#include <stdio.h>

int main()
{
    int ch;

    while ((ch = getchar()) != EOF)
    {
        printf("%02X", ch);
    }
    putchar('\n');

    return (0);
}