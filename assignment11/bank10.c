#include <stdio.h>

static float balance = 1000.0;

void deposit(float amount)
{
    if (amount > 0)
    {
        balance = balance + amount;
        printf("Rs. %.2f deposited successfully.\n", amount);
    }
}

void withdraw(float amount)
{
    if (amount <= 0)
    {
        printf("Invalid amount.\n");
    }
    else if (amount > balance)
    {
        printf("Insufficient balance.\n");
    }
    else
    {
        balance = balance - amount;
        printf("Rs. %.2f withdrawn successfully.\n", amount);
    }
}

void showBalance()
{
    printf("Current Balance = Rs. %.2f\n", balance);
}