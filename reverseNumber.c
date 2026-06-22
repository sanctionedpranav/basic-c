#include <stdio.h>

int main()
{
    int num = 532984;
    int reversed = 0;
    int remainder;

    while (num > 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Reversed Num is: %d\n", reversed);
}