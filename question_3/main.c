#include <stdio.h>

int factorial(int n);
int power(int base, int exp);
void printSeparator();

// Recursive function to calculate Fibonacci number
int factorial(int n) {
    if (n == 0 || n == 1) {  // Base case
        return 1;
    }
    return n * factorial(n - 1);  // Recursive call
}

// Reusable function to print separator
void printSeparator() {
    puts("================================");
}

// Iterative function to calculate power
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int number, choice;

    printSeparator();  // Function reuse
    puts("math functions");
    printSeparator();  // Function reuse

    printf("\n1. calculate factorial\n2. calculate power\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("enter a number: ");
            scanf("%d", &number);
            if (number < 0) {
                puts("factorial is undefined for negative numbers.");
            } else {
                printf("factorial of %d = %d\n", number, factorial(number));
            }
            break;

        case 2:
            int base, exp;
            printf("enter base: ");
            scanf("%d", &base);
            printf("Enter exponent: ");
            scanf("%d", &exp);
            printf("%d^%d = %d\n", base, exp, power(base, exp));
            break;

        default:
            puts("invalid choice!");
    }

    printSeparator();  // Function reuse

    return 0;
}
