#include <stdio.h>

int main()
{
    int array_size, count = 0;
    printf("Digite a quantidade de numeros que serão inseridos: ");
    scanf("%d", &array_size);

    int user_array[array_size];

    for (int i = 0; i < array_size; i++)
    {
        scanf("%d", &user_array[i]);
    }

    for (int i = 0; i < array_size; i++)
    {
        for (int j = i + 1; j < array_size; j++)
        {
            if (user_array[i] == user_array[j])
            {
                count++;
                break;
            }
        }
    }

    for (int i = 0; i < array_size; i++)
    {
        printf("%d ", user_array[i]);
    }

    printf("%d\n", count);

    return 0;
}