#include <stdio.h>

int getRandomNumber(){
    return 10;
}

int main(){
    int randomNumber = getRandomNumber();
    printf("Random Number is: %d\n", randomNumber);
}