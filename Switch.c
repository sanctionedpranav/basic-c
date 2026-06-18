#include <stdio.h>

int main()
{
  // float a, b;
  // int choice;

  // printf("Enter 2 numbers: ");
  // scanf("%f%f", &a, &b);

  // printf("1. Addition\n");
  // printf("2. Subtraction\n");
  // printf("3. Multiplication\n");
  // printf("4. Division\n");

  // printf("Enter your choice: ");
  // scanf("%d", &choice);

  // switch (choice)
  // {
  // case 1:
  //   printf("Addition = %.2f\n", a + b);
  //   break;

  // case 2:
  //   printf("Subtraction = %.2f\n", a - b);
  //   break;

  // case 3:
  //   printf("Multiplication = %.2f\n", a * b);
  //   break;

  // case 4:
  //   if (b != 0)
  //     printf("Division = %.2f\n", a / b);
  //   else
  //     printf("Division by zero is not allowed.\n");
  //   break;

  // default:
  //   printf("Invalid choice\n");
  // }

  // return 0;
  // int choice;

  // printf("1. Pizza: 200\n");
  // printf("2. Pasta: 1600\n");
  // printf("3. Burger: 99\n");
  // printf("4. Coldrink: 90\n");

  // printf("Enter choice: ");
  // scanf("%d", &choice);

  // switch(choice){
  //   case 1: printf ("You ordered pizza \n");
  //   break;
  //   case 2: printf("You ordered pasta\n");
  //   break;
  //   case 3: printf("You ordered burger\n");
  //   break;
  //   case 4: printf("You ordered colddrink\n");
  //   break;
  //   default: printf("Invalid Choice\n");
  // }

  int total = 0;
  int choice;

  for (int item = 1; item <= 4; item++)
  {
    printf("ScanningItem %d\n", item);

    printf("1. Phone: 20000\n");
    printf("2. Tab: 15000\n");
    printf("3. Mac: 50000\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      total += 20000;
      printf("You ordered a phone\n");
      break;
    case 2:
      total += 15000;
      printf("You ordered a tab\n");
      break;
    case 3:
      printf("Damaged Procuct\n");
      continue;
    default:
      printf("Invalid Choice\n");
    }
  }

  printf("Total bill: %d\n", total);
}