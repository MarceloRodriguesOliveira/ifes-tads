#include <stdio.h>

int conversion_f_to_c(int fahr);

int main()
{
    int i = 0, step = 20;

    while (i <= 300)
    {
        printf("%d %d\n", i, conversion_f_to_c(i));
        i += step;
    }

    return 0;
}

int conversion_f_to_c(int temperature)
{
    int celsius = (5 / 9) * (temperature - 32);
    return celsius;
}