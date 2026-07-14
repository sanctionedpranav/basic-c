#include <stdio.h>

union Data{
    int number;
    float price;
    char letter;
};

int main(){
    union Data data;

    data.number = 100;
    printf("Number is: %d\n", data.number);

    data.price = 45.49;
    printf("Price is: %.2f\n", data.price);

    data.letter = 'A';
    printf("Letter is: %c\n", data.letter);

}