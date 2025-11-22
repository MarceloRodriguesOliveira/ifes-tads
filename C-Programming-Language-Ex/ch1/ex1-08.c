#include <stdio.h>

int main()
{
    int c, sc;

    sc = 0;
    while ((c = getchar()) != EOF)
    {
        if ((c == '\n') || (c == ' ') || (c == '\t'))
        {
            sc++;
        }
    }
    printf("Special Chars: %d\n", sc);
}