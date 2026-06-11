#include <stdio.h>

int addTwoNumbers(int a, int b){
    return a + b;
}

int main(){
    int x = addTwoNumbers(10, 20);
    printf("Sum of 2 numbers is: %d\n", x);
}