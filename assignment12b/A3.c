#include <stdio.h>

enum Type {
    INT_VALUE,
    FLOAT_VALUE,
    CHAR_VALUE
};

union Data {
    int i;
    float f;
    char c;
};

struct Value {
    enum Type tag;
    union Data data;
};

void printValue(struct Value v) {
    switch(v.tag) {
        case INT_VALUE:
            printf("Integer Value = %d\n", v.data.i);
            break;

        case FLOAT_VALUE:
            printf("Float Value = %.2f\n", v.data.f);
            break;

        case CHAR_VALUE:
            printf("Character Value = %c\n", v.data.c);
            break;
    }
}

int main() {
    struct Value v;
    int choice;

    printf("1. Integer\n");
    printf("2. Float\n");
    printf("3. Character\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            v.tag = INT_VALUE;
            printf("Enter integer: ");
            scanf("%d", &v.data.i);
            break;

        case 2:
            v.tag = FLOAT_VALUE;
            printf("Enter float: ");
            scanf("%f", &v.data.f);
            break;

        case 3:
            v.tag = CHAR_VALUE;
            printf("Enter character: ");
            scanf(" %c", &v.data.c);
            break;

        default:
            printf("Invalid choice");
            return 0;
    }

    printValue(v);

    return 0;
}