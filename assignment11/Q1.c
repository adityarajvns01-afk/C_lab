#include <stdio.h>
    
    void display()
    {
        auto int x = 10;
        printf("outside inner block x = %d\n", x);
        {
            auto int x = 20;
            printf("inside inner block x = %d\n", x);
        }
        printf("after inner block x = %d\n", x);


    }
    int main()
    {
        display();
        return 0;

    }

    
