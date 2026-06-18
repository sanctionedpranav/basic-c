#include <stdio.h>

int main()
{
    // float a = 1.3, b = 1.7, c = 5.5;

    // if (a >= b && a >= c)
    // {
    //     printf("A is the largestnumber%.3f\n", a);
    // }
    // else if (b >= a && b >= c)
    // {
    //     printf("B is the largest number %.3f\n", b);
    // }
    // else
    // {
    //     printf("C is the largest number %.3f\n", c);
    // }

    // int marks;

    // printf("Enter your marks: ");
    // scanf("%d", &marks);

    // if (marks >= 90)
    // {
    //     printf("Grade A\n");
    // }
    // else if (marks >= 75)
    // {
    //     printf("Grade B\n");
    // }
    // else if (marks >= 60)
    // {
    //     printf("Grade C\n");
    // }
    // else
    // {
    //     printf("Failed \n");
    // }

    int income;

    printf("Enter your income: ");
    scanf("%d", &income);

    if (income >= 1000000)
    {
        printf("30%% tax\n");
    }
    else if (income >= 500000)
    {
        printf("20%% tax\n");
    }
    else if (income >= 300000)
    {
        printf("10%% tax\n");
    }
    else
    {
        printf("No Tax \n");
    }
}