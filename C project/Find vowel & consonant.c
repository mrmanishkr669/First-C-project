#include <stdio.h>

int main() {
    char ch;

    // Input character from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if it's a vowel or consonant using a switch statement
    switch (ch) {
        // Cases for vowels
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("'%c' is a Vowel.\n", ch);
            break;

        // Default case for consonants
        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                printf("'%c' is a Consonant.\n", ch);
            } else {
                printf("'%c' is not an alphabet character.\n", ch);
            }
    }

    return 0;
}
