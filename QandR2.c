//14 WAP to input two numbers and print their quotient and remainder.
#include <stdio.h>

int main() {
    int num1, num2;
    int quotient, remainder;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    quotient = num1 / num2;
    remainder = num1 % num2;

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}

