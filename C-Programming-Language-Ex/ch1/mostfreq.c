#include <stdio.h>

int main()
{
    int c, freq_value = 0;
    int freq_arr[26] = {0};

    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            freq_arr[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq_arr[i] > freq_value)
        {
            freq_value = freq_arr[i];
        }
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c: ", i + 'a');
        for (int j = 0; j < freq_arr[i]; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }

    printf("letra que mais repetiu: ");
    for (int i = 0; i < 26; i++)
    {
        if (freq_arr[i] == freq_value)
        {
            printf(" %c", i + 'a');
        }
    }
    putchar('\n');

    return 0;
}