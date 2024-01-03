#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int countSuccessiveVowels(const char *text) {
    int count = 0;
    int len = strlen(text);

    for (int i = 0; i < len - 1; i++) {
        char currentChar = text[i];
        char nextChar = text[i + 1];

        if (isVowel(currentChar) && isVowel(nextChar)) {
            count++;
            printf("%c%c\n", currentChar, nextChar);
        }
    }

    return count;
}

int main() {
    char text[100];

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    int result = countSuccessiveVowels(text);

    printf("Number of occurrences: %d\n", result);

    return 0;
}
