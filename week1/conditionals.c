#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int x = get_int("first number: ");
   int y = get_int("second number: ");

   if (x > y)
   {
      printf("first number (%i) is bigger\n", x);
   }
   else if (y > x)
   {
      printf("second number (%i) is bigger\n", y);
   }
   else 
   {
      printf("numbers are equal\n");
   }
}
