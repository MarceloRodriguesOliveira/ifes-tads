// Exercise 1-12. Write a program that prints its input one word per line.
#include <stdio.h>

int main()
{
    int c;
    int last_c = EOF;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (last_c != ' ' && last_c != '\t' && last_c != '\n')
            {
                putchar('\n');
            }
        }
        else
        {
            putchar(c);
        }

        last_c = c;
    }

    return 0;
}