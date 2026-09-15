#include <stdio.h>

int main()
{
    int choice;
    float balance = 5000.0;
    float amount, rate, interest;

menu:
    printf("\n--- Bank Transaction Menu ---\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Calculate Annual Interest\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Current balance = Rs. %.2f\n", balance);
            break;

        case 2:
            printf("Enter deposit amount: Rs. ");
            scanf("%f", &amount);

            if (amount <= 0)
            {
                printf("Invalid deposit amount.\n");
            }
            else
            {
                balance = balance + amount;
                printf("Deposit successful.\n");
                printf("New balance = Rs. %.2f\n", balance);
            }
            break;

        case 3:
            printf("Enter withdrawal amount: Rs. ");
            scanf("%f", &amount);

            if (amount <= 0)
            {
                printf("Invalid withdrawal amount.\n");
            }
            else if (amount > balance)
            {
                printf("Insufficient balance.\n");
            }
            else
            {
                balance = balance - amount;
                printf("Withdrawal successful.\n");
                printf("Remaining balance = Rs. %.2f\n", balance);
            }
            break;

        case 4:
            printf("Enter annual interest rate: ");
            scanf("%f", &rate);

            if (rate < 0)
            {
                printf("Invalid interest rate.\n");
            }
            else
            {
                interest = balance * rate * 1 / 100;
                printf("Annual interest = Rs. %.2f\n", interest);
            }
            break;

        case 5:
            printf("Thank you for using our bank.\n");
            goto end;

        default:
            printf("Invalid choice. Try again.\n");
    }

    goto menu;

end:
    return 0;
}