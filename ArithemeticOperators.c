#include <stdio.h>

int addition(int a , int b){
    return a + b;
}

int subtraction(int a , int b){
    return a - b;
}

int multiplication(int a , int b){
    return a * b;
}

int division(int a , int b){
    return a / b;
}

int modulus(int a, int b){
    return a % b;
}

int main(){
    int add = addition(10, 20);
    printf("Sum of 2 numbers: %d\n", add);

    int sub = subtraction(10, 20);
    printf("Difference of two numbers: %d\n", sub);

    int mul = multiplication(10, 20);
    printf("Product of two numbers: %d\n", mul);

    int div = division(10, 3);
    printf("Quotient of two numbers: %d\n", div);

    int mod = modulus(10, 3);
    printf("Remainder of two numbers: %d\n", mod);
}