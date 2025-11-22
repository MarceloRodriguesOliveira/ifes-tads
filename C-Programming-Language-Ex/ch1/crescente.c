#include <stdio.h>

int main()
{
    int c, last_c = EOF, max_seq = 0, mid_counter = 0;

    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            if (c > last_c)
            {
                mid_counter++;
            }
            else
            {
                mid_counter = 1;
            }

            if (mid_counter > max_seq)
            {
                max_seq = mid_counter;
            }
        }
        else
        {
            mid_counter = 0;
        }
        last_c = c;
    }

    printf("Maior sequencia alfabetica: %d\n", max_seq);

    return 0;
}