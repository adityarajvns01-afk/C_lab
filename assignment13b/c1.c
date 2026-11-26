#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    int (*ptr)(int, int);

    ptr = add;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", ptr(a, b));

    return 0;
}