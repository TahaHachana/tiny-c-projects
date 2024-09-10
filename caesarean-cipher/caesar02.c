// gcc -Wall -std=c11 -pedantic caesar02.c -o caesar & ./caesar
#include <stdio.h>
#include <ctype.h>

int main()
{
    int shift, ch;

    shift = 'D' - 'A';

    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch))
        {
            ch += shift;
            if ((ch > 'Z' && ch < 'A') || ch > 'z')
                ch -= 26;
        }
        putchar(ch);
    }
    return (0);
}