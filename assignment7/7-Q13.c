#include <stdio.h>

int main() {
    int a[10][10], transpose[10][10];
    int n, i, j;
    int symmetric = 1;
    int skew = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find transpose
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("Transpose of the matrix:\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    // Check symmetric and skew-symmetric
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {

            if(a[i][j] != transpose[i][j]) {
                symmetric = 0;
            }

            if(a[i][j] != -transpose[i][j]) {
                skew = 0;
            }
        }
    }

    if(symmetric) {
        printf("The matrix is symmetric.\n");
    }
    else if(skew) {
        printf("The matrix is skew-symmetric.\n");
    }
    else {
        printf("The matrix is neither symmetric nor skew-symmetric.\n");
    }

    return 0;
}