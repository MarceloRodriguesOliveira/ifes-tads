#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int i, j, c, state = OUT, count = 0;
    int wordLength[10] = {0};

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN)
            {
                if (count < 10)
                {
                    ++wordLength[count];
                }
                count = 0;
                state = OUT;
            }
        }
        else
        {
            if (state == OUT)
            {
                state = IN;
                count = 1;
            }
            else
            {
                count++;
            }
        }
    }

    if (state == IN && count < 10)
    {
        wordLength[count]++;
    }

    for (i = 0; i < 10; i++)
    {
        printf("word length %d = ", i);
        for (j = 0; j < wordLength[i]; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}