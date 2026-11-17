#include <stdio.h>

struct DeviceStatus {

    unsigned int power : 1;
    unsigned int mode : 2;
    unsigned int error : 1;
    unsigned int battery : 4;
};

int main() {

    struct DeviceStatus d;

    unsigned int power, mode, error, battery;

    printf("Enter power (0-1): ");
    scanf("%u", &power);

    printf("Enter mode (0-3): ");
    scanf("%u", &mode);

    printf("Enter error (0-1): ");
    scanf("%u", &error);

    printf("Enter battery (0-15): ");
    scanf("%u", &battery);

    if(power > 1 || mode > 3 ||
       error > 1 || battery > 15) {

        printf("Invalid input");
        return 0;
    }

    d.power = power;
    d.mode = mode;
    d.error = error;
    d.battery = battery;

    printf("\nDevice Status\n");

    printf("Power   = %u\n", d.power);
    printf("Mode    = %u\n", d.mode);
    printf("Error   = %u\n", d.error);
    printf("Battery = %u\n", d.battery);

    return 0;
}