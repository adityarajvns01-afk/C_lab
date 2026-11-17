#include <stdio.h>

struct Ordinary {
    unsigned int flag1;
    unsigned int flag2;
    unsigned int flag3;
    unsigned int flag4;
};

struct BitField {
    unsigned int flag1 : 1;
    unsigned int flag2 : 1;
    unsigned int flag3 : 1;
    unsigned int flag4 : 1;
};

int main() {

    printf("Size of Ordinary Structure = %zu bytes\n",
           sizeof(struct Ordinary));

    printf("Size of Bit-field Structure = %zu bytes\n",
           sizeof(struct BitField));

    return 0;
}