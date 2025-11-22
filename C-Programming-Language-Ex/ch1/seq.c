#include <stdio.h>

int main()
{
    int c, last_c = EOF, mid_counter = 0, max_seq = 0, charr;
    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            if (c == last_c)
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
                charr = c;
            }
        }
        else
        {
            mid_counter = 0;
        }
        last_c = c;
    }

    printf("caractere que mais se repetiu: %c - %d vezes\n", charr, max_seq);

    return 0;
}