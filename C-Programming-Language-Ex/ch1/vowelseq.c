#include <stdio.h>

int main()
{
    int c, max_seq = 0, last_c = EOF, mid_counter = 0;

    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            int is_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
            int is_last_vowel = (last_c == 'a' || last_c == 'e' || last_c == 'i' || last_c == 'o' || last_c == 'u');
            if (is_vowel)
            {
                if (is_last_vowel)
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
        }
        last_c = c;
    }

    printf("sequencia %d de vogais\n", max_seq);

    return 0;
}