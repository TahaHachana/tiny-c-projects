// gcc -Wall -std=c11 -pedantic io_filter.c && ./a.out
#include <stdio.h>

int main()
{
    int ch;

    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }

    return (0);
}