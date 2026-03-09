#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int dollars = 1;
    while(true)
    {
        char c = get_char("Would you keep %i dollars, or double it and give it to the next person? [K/D]", dollars);
        if (c == 'k' || c == 'K')
        {
            printf("Congrats! You kept %i dollars!\n", dollars);
            break;
        }
        // Alternative syntax of '= * 2'
        dollars *= 2;
    }
}