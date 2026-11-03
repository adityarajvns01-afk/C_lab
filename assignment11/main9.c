#include <stdio.h>

extern int value;

void display();

int main()
{
    printf("Before modification:\n");
    display();

    value = 50;

    printf("After modification using extern:\n");
    display();

    return 0;
}