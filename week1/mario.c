#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    // Const is for hard coded stuff that should not change
    const int row = 3;
    const int col = 3;

    for(int i = 0; i < row; i++)
    {
        for(int k = 0; k < col; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}