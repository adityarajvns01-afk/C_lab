#include <stdio.h>
int a=500;

int main(){

    printf("global number =%d\n",a);
    {
        int a=200;
        printf("block number=%d\n",a);

    }
    printf("global number =%d\n",a);
    

    return 0;
}