#include <stdio.h>
#define IN 1
#define OUT 0

int main()
{
    int c, count = 0, state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            if (state == OUT)
            {
                count++;
                state = IN;
            }
        }
        else
        {
            state = OUT;
        }
    }

    printf("Existem %d blocos de palavras\n", count);

    return 0;
}