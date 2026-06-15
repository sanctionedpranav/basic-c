#include <stdio.h>

int main()
{
    // int marks;
    // int attendance;

    // printf("Enter marks: ");
    // scanf("%d", &marks);
    // printf("Enter attendance: ");
    // scanf("%d", &attendance);

    // if (marks >= 90)
    // {
    //     if (attendance >= 90)
    //     {
    //         printf("Scholarship Approved.");
    //     }
    //     else
    //     {
    //         printf("Scholaraship has been denied due to low attendance");
    //     }
    // }
    // else
    // {
    //     printf("Scholarship has been denied due to low marks");
    // }



    int age;
    int rank;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter rank: ");
    scanf("%d", &rank);

    if (age >= 18)
    {
        if (rank <= 50)
        {
            printf("Can enter the tournament");
        }
        else
        {
            printf("Can not enter the tournament due to the low rank");
        }
    }
    else
    {
        printf("Can not enter the tournamnet due to low age.");
    }
}