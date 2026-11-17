#include <stdio.h>

enum State {
    IDLE,
    COIN_INSERTED,
    DISPENSE,
    OUT_OF_STOCK
};

enum State nextState(enum State state, int command, int *stock) {

    if(*stock <= 0)
        return OUT_OF_STOCK;

    switch(state) {

        case IDLE:
            if(command == 1)
                return COIN_INSERTED;
            break;

        case COIN_INSERTED:
            if(command == 2)
                return DISPENSE;
            break;

        case DISPENSE:
            (*stock)--;

            if(*stock <= 0)
                return OUT_OF_STOCK;

            return IDLE;

        case OUT_OF_STOCK:
            return OUT_OF_STOCK;
    }

    return state;
}

void displayState(enum State state) {

    switch(state) {
        case IDLE:
            printf("State: IDLE\n");
            break;

        case COIN_INSERTED:
            printf("State: COIN_INSERTED\n");
            break;

        case DISPENSE:
            printf("State: DISPENSE\n");
            break;

        case OUT_OF_STOCK:
            printf("State: OUT_OF_STOCK\n");
            break;
    }
}

int main() {

    enum State state = IDLE;

    int command;
    int stock = 3;

    while(state != OUT_OF_STOCK) {

        displayState(state);

        printf("1. Insert Coin\n");
        printf("2. Select Product\n");
        printf("Enter command: ");

        scanf("%d", &command);

        state = nextState(state, command, &stock);

        if(state == DISPENSE) {
            printf("Product Dispensed\n");
            state = nextState(state, 0, &stock);
        }

        printf("Remaining Stock = %d\n\n", stock);
    }

    printf("Machine is OUT OF STOCK\n");

    return 0;
}