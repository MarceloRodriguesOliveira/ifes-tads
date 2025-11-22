#include <stdio.h>

int main()
{
    int c, end_of_line = 0, count = 0;
    int buf[100] = {0};
    while ((c = getchar()) != EOF)
    {
        if (c != '\n')
        {
            buf[count++] = c;
        }
        else
        {
            end_of_line = count;
        }
    }
    printf("Tamanho do array: %d\n", end_of_line);

    for (int i = end_of_line; i >= 0; i--)
    {
        printf("%c", buf[i]);
    }
    putchar('\n');

    return 0;
}