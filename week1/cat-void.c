#include <cs50.h>
#include <stdio.h>

int get_n(void);
void meow(int times);

int main(void)
{
   int n = get_n();
   meow(n);
}

int get_n(void)
{
   int n = get_int("what's n? ");
   return n;
}

void meow(int times)
{
   for (int i = 0; i < times; i++)
   {
      printf("meow!\n");
   }
} 