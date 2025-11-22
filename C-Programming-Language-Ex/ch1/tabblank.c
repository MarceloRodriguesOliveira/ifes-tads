#include <stdio.h>

#define tabing 8

int main()
{
    int c, count = 0, last_c = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            if (last_c == '\t')
            {
                ++count;
            }
        }
        last_c = c;
    }

    printf("espaços de tab: %d\n", count);

    return 0;
}