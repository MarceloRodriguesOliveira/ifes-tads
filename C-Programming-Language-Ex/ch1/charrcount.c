#include <stdio.h>
#define MAXLINE 1000

int get_line(char s[], int lim);

int main(void)
{
    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0)
    {
        printf("[%d] %s", len, line);
    }

    return 0;
}

int get_line(char s[], int lim)
{
    int c, i = 0;

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
