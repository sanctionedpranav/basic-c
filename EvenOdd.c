#include <stdio.h>

int main(){
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);


    if(num %2 == 0){
        printf("%d This number is an even number \n", num);
    } else {
        printf("%d This is the Odd number \n", num);
    }
}