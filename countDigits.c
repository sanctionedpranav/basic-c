#include <stdio.h>

int main()
{
    int num = 1234567890;
    int count = 0;

    while (num > 0)
    {
        count++;
        num /= 10;
    }

    printf("Numver of digit= %d\n", count);
}