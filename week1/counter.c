#include <cs50.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
   int x = get_int("select a number: ");
   for (int y = x; y <= 20; y++)
   {
   sleep (1);
   printf("counting %i\n", y);
   }
}
