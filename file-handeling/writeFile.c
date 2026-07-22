#include <stdio.h>

int main()
{
    FILE *filePointer;

    filePointer = fopen("student.txt", "w");

    if (filePointer == NULL)
    {
        printf("Unable to create file");
        return 1;
    }

    fprintf(filePointer, "Name: Mayank\n");
    fprintf(filePointer, "Name: Mayank\n");
    fprintf(filePointer, "Name: Mayank\n");
    fprintf(filePointer, "Name: Mayank\n");
    fprintf(filePointer, "Name: Mayank\n");
    fprintf(filePointer, "Course: C Programming\n");

    fclose(filePointer);
    printf("Data written successful");
}