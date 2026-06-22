#include <stdio.h>

int main()
{
    int password;

    do
    {
        printf("Enter password:");
        scanf("%d", &password);
        
    } while(password!=1234);

    printf("Password is correct\n");
}