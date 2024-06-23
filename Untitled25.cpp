#include <stdio.h>

int main() {
    int number, cube;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate cube
    cube = number * number * number;

    // Print the cube
    printf("The cube of %d is %d\n", number, cube);

    return 0;
}

