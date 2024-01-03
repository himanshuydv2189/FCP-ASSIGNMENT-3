#include <stdio.h>
typedef int (*ArithmeticOperation)(int, int);

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int performOperation(int a, int b, ArithmeticOperation operation) {
    return operation(a, b);
}

int main() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    ArithmeticOperation operations[] = {add, subtract, multiply, divide};

    for (int i = 0; i < sizeof(operations) / sizeof(operations[0]); ++i) {
        printf("Result of operation %d: %d\n", i + 1, performOperation(num1, num2, operations[i]));
    }

    return 0;
}
