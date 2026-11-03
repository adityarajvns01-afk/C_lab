#include <stdio.h>

void fcallscount()
{
   static int count=0;
    count++;
    printf("function called %d times\n",count);

}
int main()
{
    fcallscount();
    fcallscount();
    fcallscount();
    return 0;
}