#include <stdio.h>

int main()
{
    int c, last_c = 0, mid_counter = 0, max_seq = 0, spec_char;
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
                spec_char = c;
            }
        }
        else
        {
            mid_counter = 0;
        }
        last_c = c;
    }

    printf("Mais repetido: %c (%d vezes)\n", spec_char, max_seq);

    return 0;
}