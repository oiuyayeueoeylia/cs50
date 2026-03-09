#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("first number ");
    int y = get_int("second number ");

    printf("result: %i\n", x + y);
}