#include <stdio.h>

struct Permission {

    unsigned int read : 1;
    unsigned int write : 1;
    unsigned int execute : 1;
    unsigned int admin : 1;
};

int main() {

    struct Permission p;

    unsigned int r, w, x, a;

    printf("Enter Read permission (0/1): ");
    scanf("%u", &r);

    printf("Enter Write permission (0/1): ");
    scanf("%u", &w);

    printf("Enter Execute permission (0/1): ");
    scanf("%u", &x);

    printf("Enter Admin permission (0/1): ");
    scanf("%u", &a);

    if(r > 1 || w > 1 || x > 1 || a > 1) {
        printf("Invalid input");
        return 0;
    }

    p.read = r;
    p.write = w;
    p.execute = x;
    p.admin = a;

    printf("\nPermissions: ");

    printf("%c", p.read ? 'r' : '-');
    printf("%c", p.write ? 'w' : '-');
    printf("%c", p.execute ? 'x' : '-');
    printf("%c", p.admin ? 'A' : '-');

    printf("\n");

    return 0;
}