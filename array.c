#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int min = a[0];
    int max = a[0];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        if(a[i] < min){
            min = a[i];
        } else if(a[i]>max) {
            max = a[i];
        }
        sum = min + max;
    }

    printf("%d\n", min);
    printf("%d\n", max);
    printf("%d\n", sum);

    // for (int i = 0; i < 5; i++){
    //     printf("%d\n", a[i]);
    // }
}