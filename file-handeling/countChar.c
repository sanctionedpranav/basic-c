#include <stdio.h>

int main()
{
    FILE *filePointer;

    int character;
    int charCount = 0;

    filePointer = fopen("student.txt", "r");

    if (filePointer == NULL)
    {
        printf("Unable to read file");
        return 1;
    }

    while ((character = fgetc(filePointer)) != EOF)
    {
        charCount++;
    }

    fclose(filePointer);

    printf("Total Character count: %d\n", charCount);
}