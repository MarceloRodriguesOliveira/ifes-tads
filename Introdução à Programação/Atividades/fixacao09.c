#include <stdio.h>

int main()
{
    int length = 10;
    int arr[length];

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = length - 1; j >= 0; j--)
    {
        printf("%d ", arr[j]);
    }
}