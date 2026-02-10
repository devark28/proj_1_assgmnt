#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    char continueProgram;

    do {
        printf("\n=== Simple Calculator Menu ===\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf(" %d", &choice);

        if (choice == 5) {
            puts("thanks you for using the calculator");
            break;
        }

        if (choice < 1 || choice > 5) {
            puts("invalid choice! try again");
            continue;
        }

        printf("Enter first number: ");
        scanf(" %f", &num1);
        printf("Enter second number: ");
        scanf(" %f", &num2);

        switch(choice) {
            case 1:
                result = num1 + num2;
                printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("%.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 == 0) {
                    puts("cannot divide by zero!");
                } else {
                    result = num1 / num2;
                    printf("result: %.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;
        }

        printf("\ndo you want to do another calculation? (y/n): ");
        scanf(" %c", &continueProgram);

        if (continueProgram == 'n' || continueProgram == 'N') {
            puts("thanks for using the calculator");
            break;
        }

    } while (1);

    return 0;
}