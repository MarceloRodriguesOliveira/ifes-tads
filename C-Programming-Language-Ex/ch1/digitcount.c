// Escreva um programa em C que: Leia uma string contendo apenas dígitos (0–9).Conte quantas vezes cada dígito aparece. Imprima um histograma vertical, por exemplo:
#include <stdio.h>

int main()
{
    int c;
    int freq[10] = {0};

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            freq[c - '0']++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%c: ", i + 'a');
        for (int j = 0; j < freq[i]; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}