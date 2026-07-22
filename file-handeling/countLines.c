#include <stdio.h>

int main()
{
    FILE *filePointer;
    int character;
    int lineCount = 0;

    filePointer = fopen("student.txt", "r");

    if (filePointer == NULL)
    {
        printf("Unable to read file");
        return 1;
    }

    while ((character = fgetc(filePointer)) != EOF)
    {
        if (character == '\n')
        {
            lineCount++;
        }
    }

    fclose(filePointer);

    printf("Total lines: %d\n", lineCount + 1);
}