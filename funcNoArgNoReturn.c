#include <stdio.h>

void delieveryFood(char address[]){
    printf("Food is delieveing on this address: %s\n", address);
}

int isEven(int n){
    return n % 2 == 0;
}

int main() {
    delieveryFood("Second Floor Brain Mentors");
    // printf("Hello Mayank, Welcome to ");

    int checkNumber =  isEven(20);
    printf("%d", checkNumber);    
}