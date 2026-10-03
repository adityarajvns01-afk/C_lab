#include <stdio.h>

int gcd(int a, int b)
{
    int temp;

    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int a, b, c;
    int gcdResult, lcmResult;

    printf("Enter three positive integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    gcdResult = gcd(gcd(a, b), c);
    lcmResult = lcm(lcm(a, b), c);

    printf("\nGCD = %d\n", gcdResult);
    printf("LCM = %d\n", lcmResult);

    return 0;
}