// Program to find the column having minimum sum using recursion

#include <stdio.h>
#include <limits.h>

int columnSum(int matrix[][10], int rows, int col, int row)
{
    if (row == rows)          
        return 0;

    return matrix[row][col] +
           columnSum(matrix, rows, col, row + 1);
}

void findMinColumn(int matrix[][10], int rows, int cols,
                   int col, int *minSum, int *minCol)
{
    int sum;

    if (col == cols)           
        return;

    sum = columnSum(matrix, rows, col, 0);

    if (sum < *minSum)
    {
        *minSum = sum;
        *minCol = col;
    }

    findMinColumn(matrix, rows, cols, col + 1, minSum, minCol);
}

int main()
{
    int matrix[10][10];
    int rows, cols;
    int i, j;
    int minSum = INT_MAX;
    int minCol = -1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    findMinColumn(matrix, rows, cols, 0, &minSum, &minCol);

    printf("Column with minimum sum = %d\n", minCol + 1);
    printf("Minimum column sum = %d\n", minSum);

    return 0;
}