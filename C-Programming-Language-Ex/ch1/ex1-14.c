// Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input.

#include <stdio.h>

int main()
{
    int c, i, j;
    int charr[26] = {0};

    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            charr[c - 'a']++;
        }
    }

    for (i = 0; i < 26; i++)
    {
        char current_letter = i + 'a';
        printf("%c: ", current_letter);
        for (j = 0; j < charr[i]; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}