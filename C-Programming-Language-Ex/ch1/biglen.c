#include <stdio.h>

#define MAXLINE 1000

int get_line(char s[], int lim);
int print_line(char s[], int lim);
int main()
{
    int len;
    char line[MAXLINE];
    while ((len = get_line(line, MAXLINE)) > 0)
    {
        if (len > 80)
        {
            print_line(line, len);
        }
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

int print_line(char s[], int lim)
{
    for (int i = 0; i < lim - 1; i++)
    {
        putchar(s[i]);
    }
    putchar('\n');
}