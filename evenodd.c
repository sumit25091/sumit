//19 WAP to find whether a given number is even or odd using conditional operator.
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    (number % 2 == 0) ? printf("%d is even.\n", number) : printf("%d is odd.\n", number);

    return 0;
}

