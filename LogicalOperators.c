#include <stdio.h>

int main()
{
    // AND Operator (&&)

    // int age = 18;
    // int citizen = 1; // 1 for true, 0 for false

    // if(age >= 18 && citizen == 0){
    //     printf("You are elegible for the right to vote.\n");
    // } else {
    //     printf("You are not elegible for the right to vote.\n");
    // }

    // OR Operator (||)

    // int day = 6;

    // if (day == 6 || day == 7)
    // {
    //     printf("It's a weekend %d\n", day);
    // } else{
    //     printf("It's not a weekend %d\n", day);
    // }
    

    // NOT Operator (!)

    int age = 27;

    // if(!(age >= 18)){
    //     printf("Minor\n");
    // } else printf("Adult\n");

    !(age >= 18) ? printf("Minor\n") : printf("Adult\n");

}