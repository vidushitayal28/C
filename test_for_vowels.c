#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    // Check if input is an alphabet
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        // Check vowels (both lowercase and uppercase)
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            printf("%c is a Vowel.\n", c);
        } else {
            printf("%c is a Consonant.\n", c);
        }
    } else {
        printf("Invalid input! Please enter an alphabet.\n");
    }

    return 0;
}