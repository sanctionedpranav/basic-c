#include <stdio.h>

int main()
{
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("2 X %d = %d\n", i, 2 * i);
    // }

    int n;
    int sum = 0;

    printf("Enter the value: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum is: %d\n", sum);


}