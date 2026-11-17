#include <stdio.h>

enum MenuChoice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    EXIT
};

int main() {
    int choice;
    float a, b;

    while(1) {
        printf("\n1. Add");
        printf("\n2. Subtract");
        printf("\n3. Multiply");
        printf("\n4. Divide");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == EXIT) {
            printf("Exiting calculator...");
            break;
        }

        if(choice < ADD || choice > DIVIDE) {
            printf("Invalid choice!");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch(choice) {
            case ADD:
                printf("Result = %.2f", a + b);
                break;

            case SUBTRACT:
                printf("Result = %.2f", a - b);
                break;

            case MULTIPLY:
                printf("Result = %.2f", a * b);
                break;

            case DIVIDE:
                if(b == 0)
                    printf("Division by zero is not allowed.");
                else
                    printf("Result = %.2f", a / b);
                break;
        }
    }

    return 0;
}