#include <stdio.h>

int main() {
    float cels, fahrn;

    puts("temp converter");
    printf("enter temp in celsius: ");
    scanf("%f", &cels);

    fahrn = (cels * 1.8) + 32.0;

    printf("%.2f degrees Celsius = %.2f degrees Fahrenheit\n", cels, fahrn);

    return 0;
}
