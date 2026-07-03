#include <stdio.h>

int main()
{
    int a[6] = {10, 50, 30, 20, 40, 70};

    int n = 6;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
}