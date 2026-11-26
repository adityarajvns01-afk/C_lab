#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, i, j;
    int (*ptr)[10];

    ptr = a;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);
    }

    printf("\nTranspose of matrix:\n");

    for(j = 0; j < cols; j++)
    {
        for(i = 0; i < rows; i++)
            printf("%d ", *(*(ptr + i) + j));

        printf("\n");
    }

    return 0;
}