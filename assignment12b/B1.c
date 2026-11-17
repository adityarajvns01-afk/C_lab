#include <stdio.h>

struct Flags {
    unsigned int isOn : 1;
    unsigned int isReady : 1;
};

int main() {

    struct Flags f;

    unsigned int on, ready;

    printf("Enter isOn (0 or 1): ");
    scanf("%u", &on);

    printf("Enter isReady (0 or 1): ");
    scanf("%u", &ready);

    if(on > 1 || ready > 1) {
        printf("Invalid input");
        return 0;
    }

    f.isOn = on;
    f.isReady = ready;

    printf("\nisOn = %u\n", f.isOn);
    printf("isReady = %u\n", f.isReady);

    return 0;
}