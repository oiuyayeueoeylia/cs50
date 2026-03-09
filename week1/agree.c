#include <cs50.h>
#include <stdio.h>

int main(void)
{
   char c = get_char("Do you agree? [y/n]: ");
   if (c == 'y' || c == 'Y')
   {
      printf("You agreed [%c]\n", c);
   }
   else
   {
      printf("You disagrred [n]\n");
   }
}
