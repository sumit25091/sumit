#include <stdio.h>

int main() 
{

    float side_length, area;

    printf("Enter the side length of the square: ");
    scanf("%f", &side_length);

    area = side_length * side_length;

    printf("The area of the square with side length %.2f is %.2f\n", side_length, area);

    return 0;
}

