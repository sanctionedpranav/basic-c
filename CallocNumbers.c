#include <stdio.h>
#include <stdlib.h>

int main() {
    int *nums;
    int n;
    int i;

    printf("Enter the numbers: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid Number: ");
        return 1;
    }

    nums = calloc((size_t)n, sizeof *nums);

    if (nums == NULL)
    {
        printf("Memo allocation failed:");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("ENter the elements: %d\n", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("============\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\n", nums[i]);
    }

    free(nums);
    nums = NULL;
}