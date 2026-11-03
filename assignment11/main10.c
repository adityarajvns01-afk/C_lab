#include <stdio.h>

extern void deposit(float amount);
extern void withdraw(float amount);
extern void showBalance();

int main()
{
    printf("Initial Account Details:\n");
    showBalance();

    printf("\nDepositing money...\n");
    deposit(500);

    printf("\nAfter Deposit:\n");
    showBalance();

    printf("\nWithdrawing money...\n");
    withdraw(300);

    printf("\nFinal Account Details:\n");
    showBalance();

    return 0;
}