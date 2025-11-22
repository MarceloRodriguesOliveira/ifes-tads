#include <stdio.h>

int main()
{
    int c, count = 0;

    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            if (count <= 2)
            {
                putchar(c);
                ++count;
            }
            else if (count == 3)
            {
                count = 0;
                putchar(' ');
                putchar(c);
                count++;
            }
        }
    }

    return 0;
}