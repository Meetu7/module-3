/*WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven)*/
#include <stdio.h>

int main() {
    int choice, a, b;
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    switch (choice) {
        case 1:
            printf("The sum is: %d", a + b);
            break;
        case 2:
            printf("The difference is: %d", a - b);
            break;
        case 3:
            printf("The product is: %d", a * b);
            break;
        case 4:
            if (b == 0) {
                printf("Error: Division by zero");
            } else {
                printf("The quotient is: %d", a / b);
            }
            break;
        default:
            printf("Error: Invalid choice");
    }
    return 0;
}
