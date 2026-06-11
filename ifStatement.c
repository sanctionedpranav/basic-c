#include <stdio.h>

void checkVotingRights(int age){
    if(age >= 18){
        printf("You are eligible to vote: %d\n", age);
    } else {
        printf("You are not eligible to vote: %d\n", age);
    }
}

int main(){
    checkVotingRights(28);
    checkVotingRights(16);
}