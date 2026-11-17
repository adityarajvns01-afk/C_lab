#include <stdio.h>

enum Result {
    FAIL,
    PASS,
    DISTINCTION
};

enum Result getResult(float marks) {
    if (marks >= 75)
        return DISTINCTION;
    else if (marks >= 40)
        return PASS;
    else
        return FAIL;
}

int main() {
    float marks;
    enum Result result;

    printf("Enter marks: ");
    scanf("%f", &marks);

    result = getResult(marks);

    switch(result) {
        case FAIL:
            printf("Result: FAIL\n");
            break;

        case PASS:
            printf("Result: PASS\n");
            break;

        case DISTINCTION:
            printf("Result: DISTINCTION\n");
            break;
    }

    printf("Numeric Value: %d\n", result);

    return 0;
}