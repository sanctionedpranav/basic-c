#include <stdio.h>

int factorial(int num){
    if(num == 1 || num == 0){
        return 1;
    }

    return num * factorial(num - 1);
}

int main(){
    int num = 5;

    int updatedNumber = factorial(num);

    printf("%d\n", updatedNumber);
}