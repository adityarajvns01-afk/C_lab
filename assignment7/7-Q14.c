#include <stdio.h>

int main() {
    int a[10][10];
    int n, i, j;
    int mainSum = 0, secondarySum = 0;
    int upper = 1, lower = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate diagonal sums
    for(i = 0; i < n; i++) {
        mainSum = mainSum + a[i][i];
        secondarySum = secondarySum + a[i][n - 1 - i];
    }

    // Check triangular properties
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {

            if(i > j && a[i][j] != 0) {
                upper = 0;
            }

            if(i < j && a[i][j] != 0) {
                lower = 0;
            }
        }
    }

    printf("Sum of main diagonal = %d\n", mainSum);
    printf("Sum of secondary diagonal = %d\n", secondarySum);

    if(upper && lower) {
        printf("The matrix is a diagonal matrix.\n");
    }
    else if(upper) {
        printf("The matrix is an upper triangular matrix.\n");
    }
    else if(lower) {
        printf("The matrix is a lower triangular matrix.\n");
    }
    else {
        printf("The matrix is none of these.\n");
    }

    return 0;
}