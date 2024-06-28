#include <stdio.h>
#include <ctype.h> // for isalpha() and tolower()

int main() {
    char ch;

    // Prompt user to enter a character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Convert to lowercase to simplify vowel checking
    ch = tolower(ch);

    // Check if the input is a letter
    if (isalpha(ch)) {
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("%c is not a valid letter.\n", ch);
    }

    return 0;
}

