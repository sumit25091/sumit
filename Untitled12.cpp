#include <stdio.h>

int main() {

    int num;

	
    
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Print the equivalent character code
    printf("Equivalent character for ASCII code %d is '%c'\n", num, (char)num);
    
    return 0;
}

