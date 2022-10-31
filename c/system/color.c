#include <stdio.h>
void red();
void yellow();
void reset();

int main()
{
    red();
    printf("Hello ");
    yellow();
    printf("World\n");
    reset();
    printf("Test\n");
    return 0;
}

void red()
{
    printf("\033[1;31m");
}

void yellow()
{
    printf("\033[1;33m");
}

void reset()
{
    printf("\033[0m");
}