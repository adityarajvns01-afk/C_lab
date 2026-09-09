#include <stdio.h>
int main() {
    int a;
    float b, c;
    printf("Enter an integer number: ");
    scanf("%d", &a);
    printf("Enter a floating-point number: ");
    scanf("%f", &b);
    c = a + b;
    printf("\nImplicit Type Conversion\n");
    printf("Addition = %.2f\n", c);
    c = a - b;
    printf("Subtraction = %.2f\n", c);
    c = a * b;
    printf("Multiplication = %.2f\n", c);
    c = a / b;
    printf("Division = %.2f\n", c);
    return 0;
}