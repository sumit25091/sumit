#include <stdio.h>

int main() 
{

    float side_length, area;

    // Input side length of the square
    printf("Enter the side length of the square: ");
    scanf("%f", &side_length);

    // Calculate the area of the square
    area = side_length * side_length;

    // Print the area
    printf("The area of the square with side length %.2f is %.2f\n", side_length, area);

    return 0;
}

