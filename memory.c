#include <stdio.h>
#include <stdlib.h>

// int main(){
//     int *ptr;

//     ptr = malloc(sizeof *ptr);

//     if(ptr == NULL){
//         printf("Memory Allocation failed. \n");
//         return 1;
//     }

//     *ptr = 25;

//     printf("value %d\n", *ptr);
//     printf("address %p\n", (void *)ptr);
//     printf("address %p\n", sizeof *ptr);

//     free(ptr);
//     ptr = NULL;
// }

int main()
{
    int num;
    int *marks;

    printf("Enter number of students: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("invalid number of students. \n");
        return 1;
    }

    marks = malloc(sizeof *marks);

    if (marks == NULL)
    {
        printf("Memoty allocation failed. \n");
        return 1;
    }

    for (int i = 0; i < num; i++)
    {
        printf("Enter marks of students %d\n ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("Students Marks:");

    for (int i = 0; i < num; i++)
    {
        printf("Student: %d%d\n ", i + 1 , marks[i]);
    }

    free(marks);

    marks = NULL;
}