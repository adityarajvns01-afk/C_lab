#include <stdio.h>

int main()
{
    char source[100], destination[100];
    char *src, *dest;

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    src = source;
    dest = destination;

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';

    printf("Copied string = %s", destination);

    return 0;
}