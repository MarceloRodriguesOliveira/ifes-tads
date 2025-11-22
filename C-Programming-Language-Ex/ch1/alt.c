#include <stdio.h>

int main()
{
    int c, last_c = EOF, mid_counter = 0, max_seq = 0;
    while ((c = getchar()) != EOF)
    {
        int is_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
        int is_last_vowel = (last_c == 'a' || last_c == 'e' || last_c == 'i' || last_c == 'o' || last_c == 'u');
        int is_letter = (c >= 'a' && c <= 'z');
        if (last_c >= 'a' && last_c <= 'z')
        {
            if (!is_letter)
            {
                mid_counter = 1;
            }
            else if (is_vowel != is_last_vowel)
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
        last_c = c;
    }
    printf("Maior sequencia alternada: %d\n", max_seq);

    return 0;
}