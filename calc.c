#include <stdio.h>

int main() {
    // Variables to store numbers and operation
    double num1, num2, result;
    char op;

    // Ask user for input
    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform calculation based on operation
    if(op == '+') {
        result = num1 + num2;
    } else if(op == '-') {
        result = num1 - num2;
    } else if(op == '*') {
        result = num1 * num2;
    } else if(op == '/') {
        if(num2 != 0)
            result = num1 / num2;
        else {
            printf("Error: Division by zero!\n");
            return 1;
        }
    } else {
        printf("Invalid operation!\n");
        return 1;
    }

    printf("Result: %.2lf\n", result);

    return 0;
