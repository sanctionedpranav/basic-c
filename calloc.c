#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *nums;

    nums = calloc(5, sizeof *nums);

    if (nums == NULL)
    {
        printf("Memory allocation faiuled.");
        return 1;
    }

    printf("================ \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d", nums[i]);
    }

    free(nums);
    nums = NULL;
}