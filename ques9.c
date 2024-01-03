#include <stdio.h>

int isValidCreditCard(const char *creditCardNumber) {
    int sum = 0;
    int digit;
    int isSecond = 0; 

    for (int i = 15; i >= 0; i--) {
        digit = creditCardNumber[i] - '0';

        if (isSecond) {
            digit *= 2;

            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
        isSecond = !isSecond;
    }

    return (sum % 10 == 0);
}

int main() {
    char creditCardNumber[17];

    printf("Enter the 16-digit Credit Card number: ");
    scanf("%s", creditCardNumber);

    if (isValidCreditCard(creditCardNumber)) {
        printf("The Credit Card number is valid.\n");
    } else {
        printf("The Credit Card number is not valid.\n");
    }

    return 0;
}

