#include <stdio.h>

int main()
{
    int num = 123456;
    int sum = 0;

    while (num != 0)
    {
        sum = sum + (num % 10);
        num /= 10;
    }

    printf("Sum of difgits= %d\n", sum);
}