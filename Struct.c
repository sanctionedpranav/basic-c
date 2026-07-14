#include <stdio.h>

#define SIZE 2

struct Student
{
    int rollNumber;
    char name[50];
    float marks;
};


int main()
{
    struct Student students[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf(" %[^\n]",
              students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    
    printf("\n--- All Student Records ---\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
    return 0;
}