#include <stdio.h>

#define MAXLINE 1000

int get_line(char s[], int lim);
void remove_blanks(char s[], int lim);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)))
    {
        int lim = len;
        remove_blanks(line, lim);
    }

    return 0;
}

int get_line(char s[], int lim)
{
    int i = 0, c;
    while (i < lim - 1 && (c = getchar()) != EOF && c != '\n')
    {
        s[i++] = c;
    }
    if (c == '\n')
    {
        s[i++] = c;
    }
    s[i] = '\0';

    return i;
}

void remove_blanks(char s[], int lim)
{
    for (int i = 0; i < lim; i++)
    {
        if (i == 0 && s[i] == ' ')
        {
            ;
        }
        else if (s[i] == ' ' && s[i - 1] == ' ')
        {
            ;
        }
        else
        {
            putchar(s[i]);
        }
    }
}