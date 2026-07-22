#include <stdio.h>

int main()
{
    FILE *filePointer;
    int character;

    filePointer = fopen("student.txt", "r");

    if(filePointer == NULL){
        printf("Unable to read file");
        return 1;
    }

    while((character = fgetc(filePointer)) != EOF){
        putchar(character);
    }

    fclose(filePointer);
}