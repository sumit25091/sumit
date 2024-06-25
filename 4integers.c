#include <stdio.h>

int main() {
    int a, b, c, d;
    
    // Getting input from user
    printf("Enter four integers (a, b, c, d): ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    // Checking the equation 3*a + 3*b + 3*c = 3*d
    if (3 * a + 3 * b + 3 * c == 3 * d) {
        printf("The equation 3*a + 3*b + 3*c = 3*d is satisfied.\n");
    } else {
        printf("The equation 3*a + 3*b + 3*c = 3*d is NOT satisfied.\n");
    }
    
    return 0;
}

