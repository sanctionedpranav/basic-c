#include <stdio.h>

// struct Student{
//     int rollNumber;
//     char name[50];
//     int age;
//     float marks;
// };

struct Product
{
    int productId;
    char productName[50];
    float price;
};


int main()
{
    struct Product product = {101, "Iphone 18", 100000};

    printf("ID: %d\n", product.productId);
    printf("Name: %s\n", product.productName);
    printf("Price: %.2f\n", product.price);

    //    struct Student student;

    //     printf("Enter Roll Number: ");
    //     scanf("%d", &student.rollNumber);

    //     printf("Enter Name: ");
    //     scanf("%s", &student.name);

    //     printf("Enter Age: ");
    //     scanf("%d", &student.age);

    //     printf("Enter Marks: ");
    //     scanf("%.2f", &student.marks);

    //     printf("Roll Number: %d\n", student.rollNumber);
    //     printf("Name: %s\n", student.name);
    //     printf("Age: %d\n", student.age);
    //     printf("Marks: %.2f\n", student.marks);
}