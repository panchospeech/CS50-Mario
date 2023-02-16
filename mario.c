#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // create the variable "height" without any value
    int height;

    do
    {
        // Prompt user for a height
        height = get_int("Height: ");
    }
    // if the number is not between 1 and 8, do again first step
    while (height < 1 || height > 8);

    // row 0 is height 1, so row must be less than height
    for (int row = 0; row < height; row++)
    {
        // print space first in nested loop row
        for (int space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        // column is nested in row, so everytime row is increased, cloumn initialize to 0, thats why column must be less or equal than row
        for (int col = 0; col <= row; col++)
        {
            printf("#");
        }
        printf("\n");
    }


}