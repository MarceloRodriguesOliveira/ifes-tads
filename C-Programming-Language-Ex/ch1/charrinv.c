#include <stdio.h>

#define MAXLINE 1000

int get_line(char s[], int lim);
void reverse_string(char s[], int lim);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0)
    {
        int lim = len;
        reverse_string(line, lim);
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

void reverse_string(char s[], int lim)
{
    int i;
    for (i = lim - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
    putchar('\n');
}